#ifndef INSTANCE_H_
#define INSTANCE_H_

// Class Instance (the "board")

#include "Piece.h"

#define BOARD_SIZE 8

class Instance
{
	public:
		Instance ();
		
		int getBoardSize ();
		int getTurn ();
		Color white ();
		Color black ();

	private:
		Color white;
		Color black;

		Piece board [BOARD_SIZE][BOARD_SIZE];
		int size = BOARD_SIZE;
		int turn;

		void initBoard ();
}
#endif
