#ifndef INSTANCE_H_
#define INSTANCE_H_

// Class Instance (Game instance initiating board + pieces)

#include "config.h"

#include "Board.h"
#include "Color.h"

class Instance
{
	public:
		// @args:
		// modeW & modeB: specifies wether the Color is played by human, algorithm, or AI (0-2, respectively)
		// debug: True for pausing & game output each turn
		Instance (int modeW, int modeB, bool debug);

		// Starts the game.
		// @return: Winner of the Game
		char start ();
		
	private:
		// Board containing & managing the pieces
		Board board;
		
		// Colors = different opponents, as set in the Constructor
		Color white;
		Color black;

		bool debug;

		// Recursively goes through all turns
		char turn (int turn);
}
#endif
