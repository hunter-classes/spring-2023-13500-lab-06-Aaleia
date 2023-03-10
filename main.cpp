#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main() {
  std::cout << encryptCaesar("Hello, World!", 10) << std::endl;
  std::cout << encryptCaesar("A Light-Year Apart...", 5) << std::endl;
  std::cout << encryptCaesar("Way to Go!", 5) << std::endl;
  
  std::cout << encryptVigenere("Hello, World!","cake") << std::endl;
  std::cout << encryptVigenere("Starlight, starbright", "wish");
  std::cout << encryptVigenere("First star I see tonight", "celestial");
  
  std::cout << decryptCaesar("Rovvy, Gybvn!", 10)<< std::endl;
  std::cout << decryptCaesar("F Qnlmy-Djfw Fufwy...", 5);
  std::cout << decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
  std::cout << decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
  std::cout << decryptVigenere("Obsyhqyop, alhnjjpcpl", "wish") == "Starlight, starbright");
  std::cout << decryptVigenere("Hmcwl lbac K wpi lhvirjx", "celestial");
  
  return 0;
}
