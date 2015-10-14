#ifndef CRYPTO_H
#define CRYPTO_H
#include "Arduino.h"
#include <uECC.h>

class Crypto
{
public:
    Crypto();
    bool setLocalKey(char *pLocalPrivateKey, char *pLocalPublicKey);
    void eccTest();
private:
    byte _pLocalPrivateKey[uECC_BYTES+1];
    byte _pLocalPublicKey[uECC_BYTES*2+1];
};

#endif // CRYPTO_H
