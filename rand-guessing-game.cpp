#include <cctype>
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

bool playGame(int guesses) {
  cout << "Game start...\n\n";

  int max;
  switch (guesses) {
  case 3:
    max = 13;
    break;
  case 5:
    max = 26;
    break;
  default:
    max = 52;
    break;
  }

  cout << "Guess a number from 1 to " << max << ".\n";

  srand(time(NULL));
  int correct = rand() % max + 1;

  while (guesses > 0) {
    cout << "You have " << guesses << " guesses.\n";

    int guess;
    cin >> guess;

    if (guess <= max || guess >= 1) {
      if (guess < correct) {
        cout << "HIGHER!\n";
      } else if (guess > correct) {
        cout << "LOWER!\n";
      } else if (guess == correct) {
        cout << "CORRECT!!!\n";
        return true;
      }

      guesses--;
    } else {
      cout << "Answer a number from 1 to " << max << ".\n";
    }
  }

  cout << "Oops... The correct answer is " << correct << ".\n";

  return false;
}

int main(int argc, char *argv[]) {
  cout << "Do you want to play a game? (y/n) ";

  string response;
  cin >> response;

  cout << "You entered: " << response << endl;
  if (response == "y" || response == "Y") {
    cout << "Let's play a game, then...\n\n";
    cout << "What difficulty?\n";
    cout << "0: easy\n";
    cout << "1: medium\n";
    cout << "2: hard\n";
    cout << "3: impossible\n";

    int difficulty;
    cin >> difficulty;

    bool result;
    switch (difficulty) {
    case 0:
      result = playGame(10);
      break;
    case 1:
      result = playGame(5);
      break;
    case 2:
      result = playGame(3);
      break;
    case 3:
      result = playGame(1);
      break;
    default:
      cout << "You didn't choose any difficulty.\n";
      break;
    }

    if (result) {
      cout << "\nCongrats, You Win!\n";
    } else {
      cout << "\nYou lose. Game over.\n";
    }
  } else if (response == "n" || response == "N") {
    cout << "Okay, we don't play anything, then...\n";
  } else {
    cout << "You should input \"y\" or \"n\".\n";
  }
  return 0;
}
