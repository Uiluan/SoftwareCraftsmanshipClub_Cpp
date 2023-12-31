#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "AlphabetCipher.h"

using namespace testing;

TEST(AlphabetCipherTest, GivenKeyYellow_WhenEncrypt_ThenReturnExpectedEncryption)
{
    AlphabetCipher cipher;
    std::string expectedEncryption = "crncmlrxstg";
    std::string keyword = "yellow";
    std::string message = "encryptthis";

    cipher.SetKey(keyword);
    std::string actualEncryption = cipher.Encrypt(message);

    EXPECT_STREQ(actualEncryption.c_str(), expectedEncryption.c_str());
}

TEST(AlphabetCipherTest, GivenKeyBlue_WhenEncrypt_ThenReturnExpectedEncryption)
{
    AlphabetCipher cipher;
    std::string expectedEncryption = "ipfppqlmfyx";
    std::string keyword = "blue";
    std::string message = "hellofriend";

    cipher.SetKey(keyword);
    std::string actualEncryption = cipher.Encrypt(message);

    EXPECT_STREQ(actualEncryption.c_str(), expectedEncryption.c_str());
}

TEST(AlphabetCipherTest, GivenKeyYellow_WhenDecrypt_ThenReturnExpectedDecryption)
{
    AlphabetCipher cipher;
    std::string expectedDecryption = "encryptthis";
    std::string keyword = "yellow";
    std::string message = "crncmlrxstg";

    cipher.SetKey(keyword);
    std::string actualDecryption = cipher.Decrypt(message);

    EXPECT_STREQ(actualDecryption.c_str(), expectedDecryption.c_str());
}

TEST(AlphabetCipherTest, GivenKeyBlue_WhenDecrypt_ThenReturnExpectedDecryption)
{
    AlphabetCipher cipher;
    std::string expectedDecryption = "hellofriend";
    std::string keyword = "blue";
    std::string message = "ipfppqlmfyx";

    cipher.SetKey(keyword);
    std::string actualDecryption = cipher.Decrypt(message);

    EXPECT_STREQ(actualDecryption.c_str(), expectedDecryption.c_str());
}

TEST(AlphabetCipherTest, GivenNoKey_WhenEncrypt_ThenReturnExpectedEncryption)
{
    AlphabetCipher cipher;
    std::string expectedEncryption = "kiqliqklisd";
    std::string message = "hellofriend";

    std::string actualEncryption = cipher.Encrypt(message);

    EXPECT_STREQ(actualEncryption.c_str(), expectedEncryption.c_str());
}

TEST(AlphabetCipherTest, GivenNoKey_WhenDecrypt_ThenReturnExpectedDecryption)
{
    AlphabetCipher cipher;
    std::string expectedDecryption = "hellofriend";
    std::string message = "kiqliqklisd";

    std::string actualDecryption = cipher.Decrypt(message);

    EXPECT_STREQ(actualDecryption.c_str(), expectedDecryption.c_str());
}

TEST(AlphabetCipherTest, GivenKeyWithSpaces_WhenEncrypt_ThenReturnExpectedEncryptionHavingRemovedSpacesFromKey)
{
    AlphabetCipher cipher;
    std::string expectedEncryption = "crncmlrxstg";
    std::string keyword = "yel low ";
    std::string message = "encryptthis";

    cipher.SetKey(keyword);
    std::string actualEncryption = cipher.Encrypt(message);

    EXPECT_STREQ(actualEncryption.c_str(), expectedEncryption.c_str());
}

TEST(AlphabetCipherTest, GivenStringWithSpaces_WhenEncrypt_ThenReturnExectedEncryptionWithSpaces)
{
    AlphabetCipher cipher;
    std::string expectedEncryption = "crncmlr eswo";
    std::string keyword = "yel low ";
    std::string message = "encrypt this";

    cipher.SetKey(keyword);
    std::string actualEncryption = cipher.Encrypt(message);

    EXPECT_STREQ(actualEncryption.c_str(), expectedEncryption.c_str());
}

TEST(AlphabetCipherTest, GivenStringWithSpaces_WhenDecrypt_ThenReturnExectedDecryptionWithSpaces)
{
    AlphabetCipher cipher;
    std::string expectedDecryption = "encrypt this";
    std::string keyword = "yellow";
    std::string message = "crncmlr eswo";

    cipher.SetKey(keyword);
    std::string actualDecryption = cipher.Decrypt(message);

    EXPECT_STREQ(actualDecryption.c_str(), expectedDecryption.c_str());
}

// TODO: check for invalid characters in key and message?

