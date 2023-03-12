
//
// File: main.cpp
// Description: Artwork label (classes/constructors)
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

/* Given main(), complete the Artist class (in files Artist.h and Artist.cpp) with constructors to initialize an artist's information, get member functions, and a PrintInfo() member function. The default constructor should initialize the artist's name to "unknown" and the years of birth and death to -1. PrintInfo() displays "Artist:", then a space, then the artist's name, then another space, then the birth and death dates in one of three formats:

(XXXX to YYYY) if both the birth and death years are nonnegative
(XXXX to present) if the birth year is nonnegative and the death year is negative
(unknown) otherwise
Complete the Artwork class (in files Artwork.h and Artwork.cpp) with constructors to initialize an artwork's information, get member functions, and a PrintInfo() member function. The default constructor should initialize the title to "unknown", the year created to -1. PrintInfo() displays an artist's information by calling the PrintInfo() function in the Artist class, followed by the artwork's title and the year created. Declare a private field of type Artist in the Artwork class.

Ex: If the input is:

Pablo Picasso
Three Musicians
1881
1973
1921
1881 and 1973 being the birth and death years respectively, with 1921 being the year the work was created, the output is:

Artist: Pablo Picasso (1881 to 1973)
Title: Three Musicians, 1921
Ex: If the input is:

Brice Marden
Distant Muses
1938
-1
2000
the output is:

Artist: Brice Marden (1938 to present)
Title: Distant Muses, 2000
Ex: If the input is:

Banksy
Balloon Girl
-1
-1
2002
the output is:

Artist: Banksy (unknown)
Title: Balloon Girl, 2002 */

#include "Artist.h"
#include "Artwork.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
   string userTitle, userArtistName;
   int yearCreated, userBirthYear, userDeathYear;

   getline(cin, userArtistName);
   getline(cin, userTitle);
   cin >> userBirthYear;
   cin >> userDeathYear;
   cin >> yearCreated;

   Artist userArtist =  Artist(userArtistName, userBirthYear, userDeathYear);

   Artwork newArtwork = Artwork(userTitle, yearCreated, userArtist);

   newArtwork.PrintInfo();
}