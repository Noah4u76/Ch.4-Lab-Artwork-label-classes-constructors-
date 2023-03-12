//
// File: Artist.cpp
// Description: Artwork label (classes/constructors)
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;


Artist::Artist() {  // DONE: Define default constructor
  artistName = "unknown";
  birthYear = -1;
  deathYear = -1;
  
}
Artist::Artist(string newName, int newBirthYear, int newDeathYear) {  // DONE: Define second constructor to initialize
  artistName = newName;                                               //       private fields (artistName, birthYear, deathYear)
  birthYear = newBirthYear;
  deathYear = newDeathYear;
}

string Artist::GetName() const {  // DONE: Define get functions: GetName(), GetBirthYear(), GetDeathYear()
  return artistName;
}
int Artist::GetBirthYear() const {
  return birthYear;
}
int Artist::GetDeathYear() const {
  return deathYear;
}

void Artist::PrintInfo() const{           // DONE: Define PrintInfo() function
  cout << "Artist: " << artistName;       //      If deathYear is entered as -1, only print birthYear
  if ( birthYear > -1 && deathYear > -1){
    cout << " (" << birthYear << " to " << deathYear << ")" << endl;
  }
  else if (birthYear > -1 && deathYear == -1){
    cout << " (" << birthYear << " to present)" << endl;
  }
  else {
    cout << " (unknown)" << endl;
  }
}
