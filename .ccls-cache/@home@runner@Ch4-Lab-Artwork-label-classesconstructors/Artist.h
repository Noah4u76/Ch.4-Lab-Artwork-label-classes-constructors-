//
// File: Artist.h
// Description: Artwork label (classes/constructors)
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef ARTISTH
#define ARTISTH

#include <string>
using namespace std;

class Artist{
   public:
      Artist();

      Artist(string artistName, int birthYear, int deathYear);

      string GetName() const;

      int GetBirthYear() const;

      int GetDeathYear() const;

      void PrintInfo() const;
   
   private:
    string artistName;  // DONE: Declare private data members - artistName, birthYear, deathYear
    int birthYear;
    int deathYear;


};

#endif