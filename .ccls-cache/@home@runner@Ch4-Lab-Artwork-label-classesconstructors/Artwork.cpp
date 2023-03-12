//
// File: Artwork.cpp
// Description: Artwork label (classes/constructors)
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "Artwork.h"
#include <iostream>

Artwork::Artwork(){    // DONE: Define default constructor
  title = "unknown";
  yearCreated = -1;
}

Artwork::Artwork(string title, int yearCreated, Artist artist){    // DONE: Define second constructor to initialize
  this -> title = title;                                           //       private fields (title, yearCreated, artist)
  this -> yearCreated = yearCreated;
  this -> artist = artist;
}

string Artwork::GetTitle(){      // DONE: Define get functions: GetTitle(), GetYearCreated()
  return title;
}
int Artwork::GetYearCreated(){
  return yearCreated;
}

void Artwork::PrintInfo(){      // DONE: Define PrintInfo() function
  artist.PrintInfo();           //       Call the PrintInfo() function in the Artist class to print an artist's information  
  cout << "Title: " << this->GetTitle() << ", " << this->GetYearCreated() << endl;
}
