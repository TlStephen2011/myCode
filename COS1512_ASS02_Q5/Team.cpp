#include "Team.h"
#include <iostream>
using namespace std;

// constructors
Team::Team() : country("Country 0"), round(0), goalsFor(0), goalsAgainst(0) {}

Team::Team(string c, int r, int p, int gf, int ga) {
  country = c;
  round = r;
  points = p;
  goalsFor = gf;
  goalsAgainst = ga;
}

// destructor
Team::~Team() { cout << "Game Over" << endl; }

// accessors
string Team::getCountry() const { return country; }

int Team::getRound() const { return round; }

int Team::getPoints() const { return points; }

int Team::getGoalsFor() const { return goalsFor; }

int Team::getGoalsAgainst() const { return goalsAgainst; }

// mutators
void Team::setCountry(string c) { country = c; }

void Team::setRound(int r) { round = r; }

void Team::setPoints(int p) { points = p; }

void Team::setGoalsFor(int gf) { goalsFor = gf; }

void Team::setGoalsAgainst(int ga) { goalsAgainst = ga; }

// other functions
void Team::reset(string c, int r, int p, int gf, int ga) {
  country = c;
  round = r;
  points = p;
  goalsFor = gf;
  goalsAgainst = ga;
}

int Team::calcGoalDifference() { return goalsFor - goalsAgainst; }

void Team::update(int pNew, int gfNew, int gaNew) {
  points += pNew;
  goalsFor += gfNew;
  goalsAgainst += gaNew;
}

// overloaded operators as friends of Team class
bool operator==(const Team &Team1, const Team &Team2) {
  if ((Team1.points == Team2.points) &&
      (Team1.goalsFor - Team1.goalsAgainst) ==
          (Team2.goalsFor - Team2.goalsAgainst)) {
    return true;
  } else {
    return false;
  }
}

bool operator>(const Team &Team1, const Team &Team2) {
  if (Team1.points > Team2.points) {
    return true;
  } else if (Team1 == Team2 &&
             (Team1.goalsFor - Team1.goalsAgainst) >
                 (Team2.goalsFor - Team2.goalsAgainst)) {
    return true;
  } else {
    return false;
  }
}

Team operator++(Team &Team1) {
  ++Team1.round;
  return Team1;
}

ostream &operator<<(ostream &outs, const Team &Team1) {
  outs << "Country: " << Team1.country << endl;
  outs << "Round: " << Team1.round << endl;
  outs << "Points: " << Team1.points << endl;
  outs << "Goals for: " << Team1.goalsFor << endl;
  outs << "Goals against: " << Team1.goalsAgainst << endl;
  return outs;
}

istream &operator>>(istream &ins, Team &Team1) {
  ins >> Team1.country >> Team1.round >> Team1.points >> Team1.goalsFor >>
      Team1.goalsAgainst;
  return ins;
}