#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"

char shiftChar(char c, int rshift) {
  if (isupper(c)) {
    return (c - 'A' + rshift) %26 + 'A'; // 'A' is 65
  }
  else if (islower(c)) {
    return (c - 'a' + rshift) %26 + 'a'; // 'a' is 97
  }
  else { // if space or character
    return c;
  }
}

std::string encryptCaesar(std::string plaintext, int rshift) {
  std::string ciphertext = "";
  for (char c : plaintext) {
    ciphertext += shiftChar(c, rshift);
  }
  return ciphertext;
}
