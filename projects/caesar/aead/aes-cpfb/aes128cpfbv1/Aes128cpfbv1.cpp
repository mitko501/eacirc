#include "Aes128cpfbv1.h"
#include "aes128cpfbv1_encrypt.h"
#include "../../common/api.h"
#include "EACglobals.h"

Aes128cpfbv1::Aes128cpfbv1(int numRounds)
    : CaesarInterface(CAESAR_AES128CPFBV1, numRounds, CRYPTO_KEYBYTES, CRYPTO_NSECBYTES, CRYPTO_NPUBBYTES, CRYPTO_ABYTES) {
    if (numRounds < -1 || numRounds > maxNumRounds) {
        mainLogger.out(LOGGER_WARNING) << "Weird number of rouds (" << numRounds << ") for " << shortDescription() << endl;
    }
    if (numRounds == -1) {
        Aes128cpfbv1_raw::numRounds = maxNumRounds;
        CaesarCommon::numRounds = maxNumRounds;
    } else {
        Aes128cpfbv1_raw::numRounds = m_numRounds;
        CaesarCommon::numRounds = m_numRounds;
    }
}

Aes128cpfbv1::~Aes128cpfbv1() { }

int Aes128cpfbv1::encrypt(bits_t *c, length_t *clen, const bits_t *m, length_t mlen,
                       const bits_t *ad, length_t adlen, const bits_t *nsec, const bits_t *npub,
                       const bits_t *k) {
    return Aes128cpfbv1_raw::crypto_aead_encrypt(c, clen, m, mlen, ad, adlen, nsec, npub, k);
}

int Aes128cpfbv1::decrypt(bits_t *m, length_t *outputmlen, bits_t *nsec,
                       const bits_t *c, length_t clen, const bits_t *ad, length_t adlen,
                       const bits_t *npub, const bits_t *k) {
    return Aes128cpfbv1_raw::crypto_aead_decrypt(m, outputmlen, nsec, c, clen, ad, adlen, npub, k);
}

std::string Aes128cpfbv1::shortDescription() const {
    return "Aes128cpfbv1";
}
