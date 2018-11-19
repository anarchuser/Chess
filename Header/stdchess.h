// Some global functions to be used in the Chess project

#include "config.h"

#include <iostream>
#include <string>

using namespace std;

typedef struct
{
	double offend;
	double defend;

	int captures;
} Character;

typedef struct
{
	int x;
	int y;
} Coord;

typedef struct
{
	Coord * coord;
} Coords;


typedef struct
{
	Piece piece;

	char symbol;
	int oldRank;
	char oldFile;

	bool disambigFile;
	bool disambigRank;

	int rank;
	char file;

	bool capture;

	bool castle;
	bool kindside;

	bool promote;
	char newSymbol;
	
	bool drawOffer;

	bool check;
	bool mate;
} Move;

// Convert files and ranks to coords
int rankToX (char rank);
int fileToY (char file);

// prints a Move struct
void printMove (string nota);
void printMove (Move move);

// Transitions move <> notation
string convertMove (Move move);

// Transitions Color (1 <> 'w', -1 <> 'b')
int convertColor (int color);

// Swap helper function (see Color class)
void swap (Piece * a, Piece * b);

// Prints winner of a game
// @args: char of winning color, otherwise prints a draw
void printResult (char symbol);
