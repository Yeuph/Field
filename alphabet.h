#pragma once

#include <bitset>

//10 bits for encoding alphabet sets
const size_t ALPHABET_ENCODING_SIZE_ = 10;
//ABC
const size_t ALPHABET_SETS_CNT_ = 3;
//Size of data being analyzed
const size_t COMPRESSION_CHUNK_SIZE_ = 8;


struct Set {
    // TODO
};


class Alphabet {
public:
    Alphabet(const Set encoding_sets[ALPHABET_SETS_CNT_]): encoding_sets_(encoding_sets_) {}

    //Method to tell compiler which 10 bit instruction to read
    Alphabet(const std::bitset<ALPHABET_ENCODING_SIZE_>& bit_encoding);

    //Dump to bit representation
    std::bitset<ALPHABET_ENCODING_SIZE_> ToBitset() const;

    size_t Encode(const char* in, size_t in_size, char* out) const;

    size_t Decode(const char* in, size_t in_size, char* out) const;

private:
    Set encoding_sets_[ALPHABET_SETS_CNT_];
};


Alphabet ChooseAlphabet(const char* in, const size_t in_size);