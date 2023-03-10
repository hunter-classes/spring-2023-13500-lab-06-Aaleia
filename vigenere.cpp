#include <iostream>
#include "vigenere.h"
#include <string>
#include <cctype>

std::string encryptVigenere(std::string plaintext, std::string keyword) {
  std::string ciphertext = "";
  int index = 0;
  for (char c : plaintext) {
    if (isalpha(c)) {
      int shift = keyword[index] - 'a';
      if (isupper(c)) {
	ciphertext += (c - 'A' + shift) %26 + 'A';
      }
      else {
        ciphertext += (c - 'a' + shift) %26 + 'a';
      }
      index = (index + 1) % keyword.length();
    }
    else {
      ciphertext += c;
    }
  }
  return ciphertext;
}
