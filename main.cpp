#include <cstring>
#include <iostream>
#include <string>

#include "compressor.h"
#include "decompressor.h"

struct CmdArgs {
    bool compress;
    std::string orig_fpath;
    std::string compressed_fpath;
};
//
CmdArgs ParseCmdArgs(int argc, char *argv[]) {
    CmdArgs args;
    // ./compression compress infile.jpg  outfile
    // argc = 4
    // check if argc == 4,
    if (argc != 4) {
        throw std::runtime_error("Expected 4 arguments, but given " + std::to_string(argc));
    }
    if (std::string(argv[1]) == "compress") {
        args.compress = true;
    } else if (std::string(argv[1]) == "decompress") {
        args.compress = false;
    } else {
        throw std::runtime_error("Expected \"compression\" or \"decompression\"  input not found");
    }
    
    // TODO: check argc and argv, and fill args
    return args;
}

// compile with: g++ main.cpp compressor.cpp decompressor.cpp alphabet.cpp -o compression -std=c++17
int main(int argc, char *argv[]) {
    // run in two modes:
    //   ./compression compress infile.jpg  outfile
    //   ./compression decompress outfile infile.jpg
    CmdArgs args = ParseCmdArgs(argc, argv);

    if (args.compress) {
        Compressor compressor;
        compressor.Compress(args.orig_fpath, args.compressed_fpath);
    } else {
        Decompressor decompressor;
        decompressor.Decompress(args.compressed_fpath, args.orig_fpath);
    }

    return 0;
}
