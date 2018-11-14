#ifndef COLOR_H_
#define COLOR_H_

// Color objects (for grouping the Pieces on the board)

#include "Piece.h"

// Amount of Pieces per Color
#define PIECE_AMOUNT 16

class Color
{
	public:
		Color (int color);

		int getChessVal ();
		double getValue ();
		bool isInCheck ();
		int size ();
		Piece [] getPieces ();
		Piece [] getCapturedPieces ();
		

	private:
		Piece [PIECE_AMOUNT] army;
		Piece [PIECE_AMOUNT] graveyard;
		int armySize;
		int graveyardSize;
		int color;

		Piece getKing ();
		void sortArmy ();
		void initPieces ();
		Character initAttr (char symbol);
}
#endif
