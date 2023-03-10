#include <iostream>
#include <string>
#include <cctype>

void ascii(std::string input) {
  for (char i : input) {
    std::cout << i << " " << (int)i << std::endl;
  }
}

int main() {
  std::string str = "Cat :3 Dog";
  ascii(str);
  return 0;
}
