// Class Instance implementation

#include "../Header/config.h"

#include <iostream>

using std::cerr;
using std::endl;

Instance :: Instance (int modeW, int modeB, bool debug)
{
	this->debug = debug;

	switch (modeW)
	{
		case 0:
			white = new Human ('w', board.getBox ('w'));
			break;
		case 1:
			white = new Algorithm ('w', board.getBox ('w'));
			break;
		case 2:
			white = new AI ('w', board.getBox ('w'));
			break;
		default:
			cerr << "Unknown Play mode. Default to Human for White" << endl;
			white = new Human ('w', board.getBox ('w'));
	}

	switch (modeB)
	{
		case 0:
			black = new Human ('b', board.getBox ('b'));
			break;
		case 1:
			black = new Algorithm ('b', board.getBox ('b'));
			break;
		case 2:
			black = new AI ('b', board.getBox ('b'));
			break;
		default:
			cerr << "Unknown Play mode. Default to Human for Black" << endl;
			black = new Human ('b', board.getBox ('b'));

	}

	Board board = new Board();
}

char Instance :: start ()
{
	board.print ();
	return turn (1);
}

char Instance :: turn (int turn)
{
	Move move;
	do
	{
		if (turn % 2 == 1) move = white.act ();
		else move = black.act ();
	} while (debug && board.exec (move));
	
	if (debug) 
	{
		board.print ();
		printMove (move);
	}
	return turn (turn + 1);
	if (debug) printMove (move);
}
