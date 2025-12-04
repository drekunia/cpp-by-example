#include <cctype>
#include <cstdio>
#include <iostream>
using namespace std;

bool playGame(int guesses) {
  cout << "Playing Game...\n";
  int correct = 42;
  cout << "Guess a number...\n";
  cout << "You get " << guesses << " guesses.\n";
  int guess;
  cin >> guess;

  // iteration to be implemented
  if (guess == correct) {
    return true;
  }

  return false;
}

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
      cout << "Congrats, You Win!\n";
    } else {
      cout << "You lose. Game over.\n";
    }
  } else if (tolower(response) == 'n') {
    cout << "Okay, we don't play anything, then...\n";
  } else {
    cout << "You should input \"y\" or \"n\".\n";
  }
  return 0;
}
