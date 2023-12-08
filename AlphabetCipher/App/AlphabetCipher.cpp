#include "AlphabetCipher.h"

AlphabetCipher::AlphabetCipher()
{

}

bool AlphabetCipher::SetKey(const std::string& key)
{
    Key = key;
    return true;
}

std::string AlphabetCipher::Encrypt(const std::string& message)
{
    (void)message;
    return "Not implemented";
}

std::string AlphabetCipher::Decrypt(const std::string& message)
{
    (void)message;
    return "Not implemented";
}