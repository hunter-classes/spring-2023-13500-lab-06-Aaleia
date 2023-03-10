#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main() {
  std::cout << "TASK B" << std::endl;
  std::cout << "'Hello, World!' by 10: " << encryptCaesar("Hello, World!", 10) << std::endl;
  std::cout << "'A Light-Year Apart...' by 5: " << encryptCaesar("A Light-Year Apart...", 5) << std::endl;
  std::cout << "'Way to Go!' by 5: " << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << std::endl;
  
  std::cout << "TASK C" << std::endl;
  std::cout << "'Hello, World!' by 'cake': " << encryptVigenere("Hello, World!","cake") << std::endl;
  std::cout << "'Starlight, starbright' by 'wish': " << encryptVigenere("Starlight, starbright", "wish") << std::endl;
  std::cout << "'First star I see tonight' by 'celestial': " << encryptVigenere("First star I see tonight", "celestial") << std::endl;
  std::cout << std::endl;

  std::cout << "TASK D" << std::endl;
  std::cout << decryptCaesar("Rovvy, Gybvn!", 10) << std::endl;
  std::cout << decryptCaesar("F Qnlmy-Djfw Fufwy...", 5) << std::endl;
  std::cout << decryptCaesar("Bfd yt Lt!", 5) << std::endl;
  std::cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;
  std::cout << decryptVigenere("Obsyhqyop, alhnjjpcpl", "wish") << std::endl;
  std::cout << decryptVigenere("Hmcwl lbac K wpi lhvirjx", "celestial") << std::endl;
  
  return 0;
}
