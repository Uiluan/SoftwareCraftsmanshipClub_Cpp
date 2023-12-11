#ifndef ALPHABETCIPHER_H
#define ALPHABETCIPHER_H

#include <map>
#include <string>

class AlphabetCipher
{
public:
    AlphabetCipher();

    bool SetKey(const std::string& key);
    std::string Encrypt(const std::string& message);
    std::string Decrypt(const std::string& message);

private:
    std::string Key;
    std::string Message;
    std::map<char, std::map<char, char>> EncryptionMap;
    std::map<char, std::map<char, char>> DecryptionMap;

    std::map<char, std::map<char, char>> &TransposeEncryptionMap();
    std::string BuildResultMessage(std::string (AlphabetCipher::*charMapFunc)(char keyChar, char messageChar));
    std::string GetEncryptionValue(char keyChar, char messageChar);
    std::string GetDecryptionValue(char keyChar, char messageChar);
};

#endif // ALPHABETCIPHER_H
