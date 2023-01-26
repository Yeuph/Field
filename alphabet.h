#include <bitset>

#include "alphabet.h"


Alphabet ChooseAlphabet(const char* in, const size_t in_size) {
    // TODO
    Set sets[ALPHABET_SETS_CNT_];
    return Alphabet(sets);
}

Alphabet::Alphabet(const std::bitset<ALPHABET_ENCODING_SIZE_>& bit_encoding) {
    // TODO
}

std::bitset<ALPHABET_ENCODING_SIZE_> Alphabet::ToBitset() const {
    std::bitset<ALPHABET_ENCODING_SIZE_> encoded;
    // TODO
    return encoded;
}

size_t Alphabet::Encode(const char* in, size_t in_size, char* out) const {
    size_t out_size;
    // TODO
    return out_size;
}

size_t Alphabet::Decode(const char* in, size_t in_size, char* out) const {
    size_t out_size;
    // TODO
    return out_size;
}
