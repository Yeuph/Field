#include <fstream>
#include <string>

#include "decompressor.h"


void Decompressor::Decompress(const std::string& in_fpath, const std::string& out_fpath) {
    std::ifstream in_stream(in_fpath, std::ios::binary);
    if (!in_stream.is_open()) {
        // TODO
    }
    
    std::ofstream out_stream(out_fpath, std::ios::binary);
    if (!out_stream.is_open()) {
        // TODO
    }

    // TODO
}
