#ifndef COLOR_H_
#define COLOR_H_

// Color objects (for grouping the Pieces on the board)

#include "Piece.h"

#include <string>

// Amount of Pieces per Color
#define PIECE_AMOUNT 16

// Interface for different Opponents
class Color
{
	public:
		Color (Piece * box, int color);

		int getChessVal ();
		double getValue ();
		bool isInCheck ();
		int size ();
		Piece [] getPieces ();
		Piece [] getCapturedPieces ();

		// Virtual function to execute a move // returns a 'move'
		virtual move act ();

	private:
		Piece [PIECE_AMOUNT] army;
		Piece [PIECE_AMOUNT] graveyard;
		int armySize;
		int graveyardSize;
		int color;
		int * board [][];

		Piece getKing ();
		void sortArmy ();
		void initPieces ();
		Character initAttr (char symbol);
}

// Human-playable Color
class Human: public Color
{
}

class Algorithm: public Color
{
}

class AI: public Color
{
}

#endif
