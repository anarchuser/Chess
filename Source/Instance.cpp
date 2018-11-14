// Class Instance implementation

#include "../Header/config.h"

Instance :: Instance ()
{
	white = new Color ('w');
	black = new Color ('b');

	initBoard ();
	
	size = BOARD_SIZE;
	turn = 0;
}

int Instance :: getBoardSize () {return BOARD_SIZE;}
int Instance :: getTurn () {return turn;}
Color Instance :: white () {return white;}
Color Instance :: black () {return black;}

void Instance :: initBoard ()
{
	for (int i = 0; i < white.size (); i++)
	{
		board [white.army [i].getX ()][white.army [i].getY ()] = white.army [i];
		board [black.army [i].getX ()][black.army [i].getY ()] = black.army [i];
	}
	for (int y = 2; y < 6; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			board [x][y] = NULL;
		}
	}
}

