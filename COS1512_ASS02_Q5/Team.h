#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <string>
using namespace std;

class Team {
 public:
  Team();
  Team(string c, int r, int p, int gf, int ga);
  ~Team();
  // accessors
  string getCountry() const;
  int getRound() const;
  int getPoints() const;
  int getGoalsFor() const;
  int getGoalsAgainst() const;
  // mutators
  void setCountry(string c);
  void setRound(int r);
  void setPoints(int p);
  void setGoalsFor(int gf);
  void setGoalsAgainst(int ga);
  // resets all team variables to specified parameters
  void reset(string c, int r, int p, int gf, int ga);
  // returns the difference between goals for and goals against
  int calcGoalDifference();
  // adds the points, goalsFor and goalAgainst specified by
  // parameters to the teams details
  void update(int pNew, int gfNew, int gaNew);
  // overloads the == operator to compare points between 2 teams
  friend bool operator==(const Team &Team1, const Team &Team2);
  // return true if points of Team1 > Team2 or if points Team1 > Team2
  // and Team1.calcGoalDifference > Team2.calcGoalDifference
  friend bool operator>(const Team &Team1, const Team &Team2);
  // overloads ++ to increment round by 1
  friend Team operator++(Team &Team1);
  // returns the insertion stream showing all details of a team
  friend ostream &operator<<(ostream &outs, const Team &Team1);
  // returns the extraction stream setting all the details for a team
  friend istream &operator>>(istream &ins, Team &Team1);

 private:
  string country;    // the name of the country for which this team plays
  int round;         // round in which the team currently plays
  int points;        // the points the team has accumulated
  int goalsFor;      // the goals the team has scored
  int goalsAgainst;  // the goals scored against the team
};

#endif  // TEAM_H