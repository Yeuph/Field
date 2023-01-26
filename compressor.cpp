#include <fstream>
#include <string>

#include "alphabet.h"
#include "compressor.h"

size_t CompressChunk(const char* in_chunk, const size_t in_size, char* out) {
    // TODO
    const auto alphabet = ChooseAlphabet(in_chunk, in_size);
    return alphabet.Encode(in_chunk, in_size, out);
}

//compressor class has compress method
void Compressor::Compress(const std::string& in_fpath, const std::string& out_fpath) {
    std::ifstream in_stream(in_fpath, std::ios::binary);
    if (!in_stream.is_open()) {
        // TODO
    }
    
    std::ofstream out_stream(out_fpath, std::ios::binary);
    if (!out_stream.is_open()) {
        // TODO
    }

    char in_buf[COMPRESSION_CHUNK_SIZE_];
    char out_buf[COMPRESSION_CHUNK_SIZE_ * 2];
    while (in_stream.read(in_buf, sizeof in_buf)) {
        const auto compressed_size = CompressChunk(in_buf, in_stream.gcount(), out_buf);
        out_stream.write(out_buf, compressed_size);
    }
}
