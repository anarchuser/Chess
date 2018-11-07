#ifndef INSTANCE_H_
#define INSTANCE_H_

// Class Instance (the "board")

#include "Piece.h"

#define BOARD_SIZE 8

class Instance
{
	private:
		Team white;
		Team black;
		
		int size = BOARD_SIZE;
		int turn = 0;

#endif
