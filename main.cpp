#include "iostream"
#include "bitset"
#include "HammingEnc.h"
#include "HammingDec.h"

using namespace std;

int main() {
    uint data, data_encoded, data_decoded;

    data = 120;

    data_encoded = Encode(data);
    data_decoded = Decode(data_encoded);

    cout << "Data: " << data
    << " Data Encoded: " << data_encoded
    << " Data Decoded: " << data_decoded << endl;

    return 0;
}