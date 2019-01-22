#ifndef BOARD_H_
#define BOARD_H_

// Chess "Board"

#include "config.h"

#include "Piece.h"

// Size of Board
#define BOARD_SIZE 8
#define PIECE_AMOUNT 16

class Board
{
	public:
		Board ();
		
		// Getter methods
		Piece piece (Coord coord);
		char color (Coord coord);
		int getBoardSize ();
		Piece * getBox (char color);

		// Method to execute actions on the board
		bool exec (Move move);

	private:
		Piece board [BOARD_SIZE][BOARD_SIZE];
		Piece boxW [Piece_AMOUNT];
		Piece boxB [Piece_AMOUNT];
		int size;
		
		// Move Piece to absolute or relative position
		// @args: New Coords or Direction
		// @return: True if succesful, False if not
		bool jump (coord start, coord end);
		bool move (coord start, coord dir);

		// Promotes a Pawn
		// @args: symbol of new Piece
		// @return: True if succesful, False if not a pawn and not in opposite home row
		bool promote (char symbol);
}
#endif
