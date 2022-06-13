import qbs

CppApplication {
    name: "smi-parser-test"
    Depends { name: 'cpp' }
    consoleApplication: true
    cpp.cxxLanguageVersion: "c++20"
    cpp.includePaths: ["../parser/inc"]
    //cpp.cxxFlags: "-fsanitize=address"
    //cpp.staticLibraries: "asan"
    files: [
        "main.cpp",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: "application"
        qbs.install: true
        qbs.installDir: "bin"
    }
}
