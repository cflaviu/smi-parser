import qbs

StaticLibrary {
    name: "smi-parser"
    Depends { name: 'cpp' }
    consoleApplication: true
    cpp.cxxLanguageVersion: "c++20"
    cpp.includePaths: ["inc", "inc_dep"]
    //cpp.cxxFlags: "-fsanitize=address"
    //cpp.staticLibraries: "asan"
    files: [
        "inc/smi/ast.hpp",
        "inc/smi/rules.hpp",
        "inc/smi/tokens.hpp",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: "application"
        qbs.install: true
        qbs.installDir: "bin"
    }
}

