// Color implementation

#include "../Header/Color.h"

Color :: Color (int color)
{
	this->color = convertColor (color);
	armySize = PIECE_AMOUNT;

	initPieces (army, PIECE_AMOUNT);
	initPieces (graveyard, PIECE_AMOUNT, NULL);

	int armySize = PIECE_AMOUNT;
	int graveyardSize = 0;
}

int Color :: getChessVal ()
{
	int sum = 0;
	for (int i = 0; i < armySize; i++)
	{
		sum += army [i].getChessVal ();
	}
	return sum;
}

double Color :: getValue ()
{
	double sum = 0;
	for (int i = 0; i < armySize; i++)
	{
		sum += army [i].getValue ();
	}
	return sum;
}

bool Color :: isInCheck () {return getKing ().isInCheck ();}
int Color :: size () {return size;}
Piece * getPieces () {return army;}
Piece * getCapturedPieces () {return graveyard;}

Piece Color :: getKing ()
{
	for (int i = 0; i < armySize; i++)
	{
		if (army [i].getSymbol () == 'K') return army [i];
	}
	return NULL;
}

void Color :: sortArmy ()
{
	for (int i = 0; i < armySize; i++)
	{
		for (int j = armySize; j > 0; j--)
		{
			if (army [j].getValue () > army [j - 1].getValue ()) swap (& army [j], & army [j-1]);
		}
	}
}

Character Color :: initAttr (char symbol)
{
	Character attr = {.offend = 0.0, .defend = 0.0, .captures = 0};
	return attr;
}

void Color :: initPieces ();
{
	int index = 0;

	// Init King + Queen
	army [index] = new King (index, color, (int) (3.5 + 0.5 * color), (int) (3.5 - 3.5 * color), initAttr ('K'));
	index++;
	army [index] = new Queen (index, color, (int) (3.5 - 0.5 * color), (int) (3.5 - 3.5 * color), initAttr ('Q'));
	index++;

	// Init Bishops
	army [index] = new Bishop (index, color, 2, (int) (3.5 - 3.5 * color), initAttr ('B'));
	index++;
	army [index] = new Bishop (index, color, 5, (int) (3.5 - 3.5 * color), initAttr ('B'));
	index++;

	// Init Knights
	army [index] = new Knight (index, color, 1, (int) (3.5 - 3.5 * color), initAttr ('N'));
	index++;
	army [index] = new Knight (index, color, 6, (int) (3.5 - 3.5 * color), initAttr ('N'));
	index++;
	
	// Init Rooks
	army [index] = new Rooks (index, color, 0, (int) (3.5 - 3.5 * color), initAttr ('R'));
	index++;
	army [index] = new Rooks (index, color, 7, (int) (3.5 - 3.5 * color), initAttr ('R'));
	index++;
		

	// Init Pawns
	for (int i = 0; i < 8; i++)
	{
		army [index] = new Pawn (index, color, i, (int) (3.5 - 2.5 * color), initAttr ('P'));
	}
}
