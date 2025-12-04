#include <cctype>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::cout << "Do you want to play a game? (y/n) ";
  std::string response;
  std::cin >> response;
  std::cout << "You entered: " << response << std::endl;
  if (tolower(response[0]) == 'y') {
    std::cout << "Let's play a game, then...\n";
  } else if (tolower(response[0]) == 'n') {
    std::cout << "Okay, we don't play anything, then...\n";
  } else {
    std::cout << "You should input \"y\" or \"n\".\n";
  }
  // system("pause");
  return 0;
}
