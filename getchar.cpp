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
    cout << "What difficulty? (easy/medium/hard/impossible): ";
    string difficulty;
    cin >> difficulty;

    if (difficulty == "easy" || difficulty == "medium" ||
        difficulty == "hard") {
      cout << "Respawn enabled.\n";
    } else if (difficulty == "impossible") {
      cout << "Good luck.\n";
    } else {
      cout << "Just play.\n";
    }
  } else if (tolower(response) == 'n') {
    cout << "Okay, we don't play anything, then...\n";
  } else {
    cout << "You should input \"y\" or \"n\".\n";
  }
  return 0;
}
