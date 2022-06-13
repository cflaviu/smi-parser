#pragma once
#ifndef PCH
    #include <boost/fusion/include/adapt_struct.hpp>
    #include <ostream>
    #include <string>
    #include <vector>
#endif

namespace smi::ast
{
    using identifier = std::string;
    using identifier_list = std::vector<identifier>;

    struct imported_symbols
    {
        std::vector<identifier> names {};
        identifier module_name {};
    };

    std::ostream& operator<<(std::ostream& out, const imported_symbols& item)
    {
        out << "from " << item.module_name << ": ";
        for (auto& name: item.names)
        {
            out << name << ", ";
        }

        return out << '\n';
    }

    using imports = std::vector<imported_symbols>;

    std::ostream& operator<<(std::ostream& out, const imports& item)
    {
        for (auto& imported_items: item)
        {
            out << "imports " << imported_items << '\n';
        }

        return out;
    }

    struct mib
    {
        identifier name {};
        imports imports_decl {};
    };

    std::ostream& operator<<(std::ostream& out, const mib& item) { return out << "module " << item.name << '\n' << item.imports_decl; }
}

BOOST_FUSION_ADAPT_STRUCT(smi::ast::mib, name, imports_decl);
BOOST_FUSION_ADAPT_STRUCT(smi::ast::imported_symbols, names, module_name);
