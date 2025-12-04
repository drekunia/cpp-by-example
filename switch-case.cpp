#include <cctype>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << "Do you want to play a game? (y/n) ";
  int response = getchar();
  cout << "You entered: " << static_cast<char>(response) << endl;
  if (tolower(response) == 'y') {
    cout << "Let's play a game, then...\n";
    cout << "What difficulty? (easy/medium/hard/impossible):\n";
    cout << "0: easy\n";
    cout << "1: medium\n";
    cout << "2: hard\n";
    cout << "3: impossible\n";

    int difficulty;
    cin >> difficulty;

    switch (difficulty) {
    case 0:
      cout << "you choose easy\n";
      break;
    case 1:
      cout << "you choose medium\n";
      break;
    case 2:
      cout << "you choose hard\n";
      break;
    case 3:
      cout << "you choose impossible\n";
      break;
    default:
      cout << "use medium as default\n";
    }
  } else if (tolower(response) == 'n') {
    cout << "Okay, we don't play anything, then...\n";
  } else {
    cout << "You should input \"y\" or \"n\".\n";
  }
  return 0;
}
