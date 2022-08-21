#include <iostream>
#include <stdlib.h>
#include "bitset"
#include "HammingEnc.h"

using namespace std;

uint Encode(uint data) {
    // Variables
    bitset<32> reg, data_encoded;

    reg = data;

    data_encoded[0]  = reg[0] ^reg[1] ^reg[3] ^reg[4] ^reg[6] ^reg[8] ^reg[10]^reg[11]^reg[13]^reg[15]^reg[17]^reg[19]^reg[21]^reg[23]^reg[25];
    data_encoded[1]  = reg[0] ^reg[2] ^reg[3] ^reg[5] ^reg[6] ^reg[9] ^reg[10]^reg[12]^reg[13]^reg[16]^reg[17]^reg[20]^reg[21]^reg[24]^reg[25];
    data_encoded[3]  = reg[1] ^reg[2] ^reg[3] ^reg[7] ^reg[8] ^reg[9] ^reg[10]^reg[14]^reg[15]^reg[16]^reg[17]^reg[22]^reg[23]^reg[24]^reg[25];
    data_encoded[7]  = reg[4] ^reg[5] ^reg[6] ^reg[7] ^reg[8] ^reg[9] ^reg[10]^reg[18]^reg[19]^reg[20]^reg[21]^reg[22]^reg[23]^reg[24]^reg[25];
    data_encoded[15] = reg[11]^reg[12]^reg[13]^reg[14]^reg[15]^reg[16]^reg[17]^reg[18]^reg[19]^reg[20]^reg[21]^reg[22]^reg[23]^reg[24]^reg[25];
    data_encoded[2]  = reg[0];
    data_encoded[4]  = reg[1];
    data_encoded[5]  = reg[2];
    data_encoded[6]  = reg[3];
    data_encoded[8]  = reg[4];
    data_encoded[9]  = reg[5];
    data_encoded[10] = reg[6];
    data_encoded[11] = reg[7];
    data_encoded[12] = reg[8];
    data_encoded[13] = reg[9];
    data_encoded[14] = reg[10];
    data_encoded[16] = reg[11];
    data_encoded[17] = reg[12];
    data_encoded[18] = reg[13];
    data_encoded[19] = reg[14];
    data_encoded[20] = reg[15];
    data_encoded[21] = reg[16];
    data_encoded[22] = reg[17];
    data_encoded[23] = reg[18];
    data_encoded[24] = reg[19];
    data_encoded[25] = reg[20];
    data_encoded[26] = reg[21];
    data_encoded[27] = reg[22];
    data_encoded[28] = reg[23];
    data_encoded[29] = reg[24];
    data_encoded[30] = reg[25];
    data_encoded[31] = reg[26];

    return data_encoded.to_ulong();
};
