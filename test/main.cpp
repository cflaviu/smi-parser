#include <fstream>
#include <iostream>
#include <smi/rules.hpp>

std::string read_from_file(char const* infile)
{
    std::ifstream instream(infile);
    if (!instream.is_open())
    {
        std::cerr << "Couldn't open file: '" << infile << '\'' << std::endl;
        exit(-1);
    }

    instream.unsetf(std::ios::skipws); // No white space skipping!
    return std::string(std::istreambuf_iterator<char>(instream.rdbuf()), std::istreambuf_iterator<char>());
}

int main(const int argc, const char* argv[])
{
    const std::string input(read_from_file(argc > 1 ? argv[1] : ""));
    smi::ast::mib mib {};
    auto iter = input.begin();
    const auto eof = input.end();
    bool ok = smi::parse(iter, eof, mib);
    if (iter != eof)
    {
        std::cout << "Remaining unparsed: '" << std::string(iter, eof) << "'\n";
    }

    std::cout << "Parsed: " << (100.0f * std::distance(input.begin(), iter) / input.size()) << "%\n";
    std::cout << "ok = " << ok << std::endl;
    if (ok)
    {
        std::cout << mib;
    }

    return 0;
}
