#pragma once
#ifndef PCH
    #include <boost/spirit/home/x3/char/char.hpp>
    #include <boost/spirit/home/x3/char/char_class.hpp>
    #include <boost/spirit/home/x3/core/parse.hpp>
    #include <boost/spirit/home/x3/directive/lexeme.hpp>
    #include <boost/spirit/home/x3/directive/skip.hpp>
    #include <boost/spirit/home/x3/nonterminal/rule.hpp>
    #include <boost/spirit/home/x3/operator.hpp>
    #include <smi/ast.hpp>
    #include <smi/tokens.hpp>
#endif

namespace smi::grammar
{
    namespace x3 = boost::spirit::x3;

    static const auto identifier = x3::rule<struct identifier, ast::identifier> {"identifier"} =
        x3::lexeme[(x3::ascii::alpha | '_') >> *(x3::ascii::alnum | '_' | '-')];

    static const auto identifier_list = x3::rule<struct identifier_list, ast::identifier_list> {"identifier_list"} =
        (identifier >> *(',' >> identifier));

    static const auto imported_symbols = x3::rule<struct imports, ast::imported_symbols> {"imported_symbols"} =
        identifier_list >> token::from >> identifier;

    static const auto imports = x3::rule<struct imports, ast::imports> {"imports"} = token::imports >> +imported_symbols >> ';';

    static const auto mib = x3::rule<struct doc, ast::mib> {"mib"} =
        identifier >> token::definitions >> token::defined_as >> token::begin >> imports >> token::end;

    static auto const& rules = x3::skip(x3::space)[mib];
}

namespace smi
{
    template <typename Iterator>
    bool parse(Iterator& first, Iterator last, ast::mib& result)
    {
        return ::boost::spirit::x3::parse(first, last, grammar::rules, result);
    }
}
