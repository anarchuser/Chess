#ifndef COLOR_H_
#define COLOR_H_

// Color objects (for grouping the Pieces on the board)

#include "Piece.h"

#define PIECE_AMOUNT 16

class Color
{
	public:
		Color (bool isWhite);

	private:
		Piece [PIECE_AMOUNT];


#endif
