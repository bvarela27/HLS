#include <iostream>
#include <stdlib.h>
#include "bitset"
#include "HammingDec.h"

using namespace std;

uint Decode(uint data) {
    // Variables
    bitset<32> reg, syn, data_decoded;

    reg = data;
    syn[0] = reg[0] ^reg[2] ^reg[4] ^reg[6] ^reg[8] ^reg[10]^reg[12]^reg[14]^reg[16]^reg[18]^reg[20]^reg[22]^reg[24]^reg[26]^reg[28]^reg[30];
    syn[1] = reg[1] ^reg[2] ^reg[5] ^reg[6] ^reg[9] ^reg[10]^reg[13]^reg[14]^reg[17]^reg[18]^reg[21]^reg[22]^reg[25]^reg[26]^reg[29]^reg[30];
    syn[2] = reg[3] ^reg[4] ^reg[5] ^reg[6] ^reg[11]^reg[12]^reg[13]^reg[14]^reg[19]^reg[20]^reg[21]^reg[22]^reg[27]^reg[28]^reg[29]^reg[30];
    syn[3] = reg[7] ^reg[8] ^reg[9] ^reg[10]^reg[11]^reg[12]^reg[13]^reg[14]^reg[23]^reg[24]^reg[25]^reg[26]^reg[27]^reg[28]^reg[29]^reg[30];
    syn[4] = reg[15]^reg[16]^reg[17]^reg[18]^reg[19]^reg[20]^reg[21]^reg[22]^reg[23]^reg[24]^reg[25]^reg[26]^reg[27]^reg[28]^reg[29]^reg[30];

    if ( syn.to_ulong() > 0 ) {
        reg[syn.to_ulong()-1] = ~reg[syn.to_ulong()-1];
    }

    data_decoded[0]  = reg[2];
    data_decoded[1]  = reg[4];
    data_decoded[2]  = reg[5];
    data_decoded[3]  = reg[6];
    data_decoded[4]  = reg[8];
    data_decoded[5]  = reg[9];
    data_decoded[6]  = reg[10];
    data_decoded[7]  = reg[11];
    data_decoded[8]  = reg[12];
    data_decoded[9]  = reg[13];
    data_decoded[10] = reg[14];
    data_decoded[11] = reg[16];
    data_decoded[12] = reg[17];
    data_decoded[13] = reg[18];
    data_decoded[14] = reg[19];
    data_decoded[15] = reg[20];
    data_decoded[16] = reg[21];
    data_decoded[17] = reg[22];
    data_decoded[18] = reg[23];
    data_decoded[19] = reg[24];
    data_decoded[20] = reg[25];
    data_decoded[21] = reg[26];
    data_decoded[22] = reg[27];
    data_decoded[23] = reg[28];
    data_decoded[24] = reg[29];
    data_decoded[25] = reg[30];
    data_decoded[26] = reg[31];
    data_decoded[27] = 0;
    data_decoded[28] = 0;
    data_decoded[29] = 0;
    data_decoded[30] = 0;
    data_decoded[31] = 0;

    return data_decoded.to_ulong();
}
