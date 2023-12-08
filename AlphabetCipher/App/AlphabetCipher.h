#ifndef ALPHABETCIPHER_H
#define ALPHABETCIPHER_H

#include <string>

class AlphabetCipher
{
public:
    AlphabetCipher();

public:
    bool SetKey(const std::string& key);
    std::string Encrypt(const std::string& message);
    std::string Decrypt(const std::string& message);

    std::string Key;
};

#endif // ALPHABETCIPHER_H
