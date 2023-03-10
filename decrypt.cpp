#include <iostream>
#include <string>
#include <cctype>
#include "decrypt.h"
#include "caesar.h"
#include "vigenere.h"

std::string decryptCaesar(std::string ciphertext, int rshift) {
  return encryptCaesar(ciphertext, 26 - rshift);
}

std::string decryptVigenere(std::string ciphertext, std::string keyword) {
  int len = keyword.length();
  for (int i = 0; i < len; i++) {
    keyword[i] = 123 - (keyword[i] - 'a');
  }
  return encryptVigenere(ciphertext, keyword);
}
