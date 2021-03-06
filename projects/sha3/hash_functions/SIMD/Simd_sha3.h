#ifndef SIMD_SHA3_H
#define SIMD_SHA3_H

#include "../../Sha3Interface.h"
extern "C" {
#include "tables.h"
}

class Simd : public Sha3Interface {

#define SIMD_DEFAULT_ROUNDS	4

private:
int simdNumRounds;
simdHashState simdState;

/* 
 * NIST API
 */
public:
Simd(const int numRounds);
int Init(int hashbitlen);
int Update(const BitSequence *data, SimdDataLength databitlen);
int Final(BitSequence *hashval);
int Hash(int hashbitlen, const BitSequence *data, SimdDataLength databitlen,
                BitSequence *hashval);

/* 
 * Internal API
 */
private:
void IncreaseCounter(simdHashState *state, SimdDataLength databitlen);
int InitIV(simdHashState *state, int hashbitlen, const unsigned long *IV);

};

#endif