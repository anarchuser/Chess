// Board implementation

#include "../Header/Board.h"

#include <iostream>

using std :: cerr;
using std :: endl;

Board :: Board ()
{
	initPieces (boxW, 'w');
	initPieces (boxB, 'b');

	initBoard ();
}

Character Board :: initAttr (char symbol)
{
	Character attr = {.offend = 0.0, .defend = 0.0, .captures = 0};
	return attr;
}

void Board :: initPieces (Piece box, int color);
{
	int index = 0;
	color = convertColor (color);

	// Init King + Queen
	box [index] = new King (index, color, (int) (3.5 + 0.5 * color), (int) (3.5 - 3.5 * color), initAttr ('K'));
	index++;
	box [index] = new Queen (index, color, (int) (3.5 - 0.5 * color), (int) (3.5 - 3.5 * color), initAttr ('Q'));
	index++;

	// Init Bishops
	box [index] = new Bishop (index, color, 2, (int) (3.5 - 3.5 * color), initAttr ('B'));
	index++;
	box [index] = new Bishop (index, color, 5, (int) (3.5 - 3.5 * color), initAttr ('B'));
	index++;

	// Init Knights
	box [index] = new Knight (index, color, 1, (int) (3.5 - 3.5 * color), initAttr ('N'));
	index++;
	box [index] = new Knight (index, color, 6, (int) (3.5 - 3.5 * color), initAttr ('N'));
	index++;
	
	// Init Rooks
	box [index] = new Rooks (index, color, 0, (int) (3.5 - 3.5 * color), initAttr ('R'));
	index++;
	box [index] = new Rooks (index, color, 7, (int) (3.5 - 3.5 * color), initAttr ('R'));
	index++;
		

	// Init Pawns
	for (int i = 0; i < 8; i++)
	{
		box [index] = new Pawn (index, color, i, (int) (3.5 - 2.5 * color), initAttr ('P'));
	}
}

void Board :: initBoard ()
{
	for (int y = 0; y < BOARD_SIZE; y++)
	{
		for (int x = 0; x < BOARD_SIZE; x++)
		{
			board [x][y] = NULL;
		}
	}
	for (int i = 0; i < PIECE_AMOUNT; i++)
	{
		board [boxW [i].getX ()][boxW [i].getY ()] = boxW [i];
		board [boxB [i].getY ()][boxB [i].getX ()] = boxB [i];
	}
}

Piece Board :: piece (int x, int y) {return board [x][y];}
char Board :: color (int x, int y) {return board [x][y].getColor ();}
int Board :: getBoardSize () {return size;}

Piece * Board :: getBox (char color)
{
	switch (color)
	{
		case 'w':
			return boxW;
		case 'b':
			return boxB;
		default:
			cerr << "Unknown color given!" << endl;
			return NULL;
	}
}

bool Board :: exec (Move move)
{
	return jump (rankToX (move.oldRank), fileToY (move.oldFile), rankToX (move.rank), fileToY (move.file));
}

bool Board :: jump (int x, int y, int tx, int ty)
{
	Piece * source = & board [x][y];
	Piece * dest = & board [tx][tx];
	
	if (x < 0 || y < 0 || tx < 0 || ty < 0 || x > size || y > size || tx > size || ty > size) cerr << "Index Error Out Of Bounds!" << endl;
	else if (* source == NULL || * dest == NULL) cerr << "The given Position is empty!";
	else if (* source.getColor () == * dest.getColor ()) cerr << "You can't capture your own Pieces!" << endl;
	//TODO check for checks
	else
	{
		//TODO actually move pieces
		return true;
	}
	return false;
}

bool Board :: move (int x, int y, int dx, int dy)
{
	return jump (x, x + dx, y, y + dy);
}
