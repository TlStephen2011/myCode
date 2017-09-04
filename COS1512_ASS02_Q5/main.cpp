#include <iostream>
#include "Team.h"
using namespace std;

int main() {
  Team opponent, newOpponent;
  Team home("South-Africa", 1, 4, 6, 4);
  opponent.reset("Germany", 1, 4, 6, 4);
  cout << home << endl;
  cout << opponent << endl;

  if (home == opponent &&
      home.calcGoalDifference() == opponent.calcGoalDifference()) {
    cout << "This is a tie!" << endl;
  } else if (home > opponent) {
    home = ++home;
  } else {
    opponent = ++opponent;
  }

  cout << endl;
  cout << "Country: " << home.getCountry() << endl;
  cout << "Points: " << home.getPoints() << endl;
  cout << "Round: " << home.getRound() << endl;

  cout << endl;
  cout << "Country: " << opponent.getCountry() << endl;
  cout << "Points: " << opponent.getPoints() << endl;
  cout << "Round: " << opponent.getRound() << endl;

  cout << endl;
  cout << "Enter the details for the new opponent: ";
  cin >> newOpponent;

  int h, a;
  cout << endl;
  cout << "Enter the scores <home> <away> : ";
  cin >> h >> a;
  cout << endl;

  home.update(3, h, a);
  newOpponent.update(0, a, h);

  if (home == newOpponent &&
      home.calcGoalDifference() == newOpponent.calcGoalDifference()) {
    cout << "This is a tie!" << endl;
  } else if (home > newOpponent) {
    ++home;
  } else {
    ++newOpponent;
  }

  cout << endl;
  cout << "Country: " << home.getCountry() << endl;
  cout << "Points: " << home.getPoints() << endl;
  cout << "Round: " << home.getRound() << endl;

  cout << endl;
  cout << "Country: " << newOpponent.getCountry() << endl;
  cout << "Points: " << newOpponent.getPoints() << endl;
  cout << "Round: " << newOpponent.getRound() << endl;

  cout << endl << endl;

  return 0;
}