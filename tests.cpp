#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("A. Shift Character") {
  CHECK (shiftChar('c', 7) == 'j');
  CHECK (shiftChar('L', 3) == 'O');
  CHECK (shiftChar('z', 2) == 'b');
  CHECK (shiftChar('N', 30) == 'R');
  CHECK (shiftChar('!', 2) == '!');
}

TEST_CASE("B. Caesar Cipher") {
  CHECK (encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
  CHECK (encryptCaesar("A Light-Year Apart...", 5) == "F Qnlmy-Djfw Fufwy...");
  CHECK (encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}

TEST_CASE("C. Vigenere Cipher") {
  CHECK (encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
  CHECK (encryptVigenere("Starlight, starbright", "wish") == "Obsyhqyop, alhnjjpcpl");
  CHECK (encryptVigenere("First star I see tonight", "celestial") == "Hmcwl lbac K wpi lhvirjx");
}

TEST_CASE("D. Decryption") {
  CHECK (decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
  CHECK (decryptCaesar("F Qnlmy-Djfw Fufwy...", 5) == "A Light-Year Apart...");
  CHECK (decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!" );
  CHECK (decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
  CHECK (decryptVigenere("Obsyhqyop, alhnjjpcpl", "wish") == "Starlight, starbright");
  CHECK (decryptVigenere("Hmcwl lbac K wpi lhvirjx", "celestial") == "First star I see tonight");
}
