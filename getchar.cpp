#include <cctype>
#include <cstdio>
#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "Do you want to play a game? (y/n) ";
  int response = getchar();
  std::cout << "You entered: " << static_cast<char>(response) << std::endl;
  if (tolower(response) == 'y') {
    std::cout << "Let's play a game, then...\n";
  } else if (tolower(response) == 'n') {
    std::cout << "Okay, we don't play anything, then...\n";
  } else {
    std::cout << "You should input \"y\" or \"n\".\n";
  }
  return 0;
}
