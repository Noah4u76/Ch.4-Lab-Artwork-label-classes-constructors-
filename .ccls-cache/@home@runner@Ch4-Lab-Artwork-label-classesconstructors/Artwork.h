//
// File: Artwork.h
// Description: Artwork label (classes/constructors)
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef ARTWORKH
#define ARTWORKH

#include "Artist.h"

class Artwork{
   public:
      Artwork();

      Artwork(string title, int yearCreated, Artist artist);

      string GetTitle();

      int GetYearCreated();

      void PrintInfo();
   
   private:
     
    string title;       // DONE: Declare private data members - title, yearCreated
    int yearCreated;
    Artist artist;      // DONE: Declare private data member artist of type Artist
      

};

#endif