#pragma once

#include <string>


class Compressor {
public:
    void Compress(const std::string& in_fpath, const std::string& out_fpath);
};

//Tells compilers what the methods look like.
