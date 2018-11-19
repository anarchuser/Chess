// Color implementation

#include "../Header/Color.h"

Color :: Color (int color, Piece * box)
{
	this->color = convertColor (color);

	army = box;

	initGraveyard ();

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

void Color :: initGraveyard ()
{
	for (int i = 0; i < PIECE_AMOUNT; i++)
	{
		graveyard [i] = NULL;
	}
}
