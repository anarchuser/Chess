// Implementation for the standard Chess header

#include "../Header/stdchess.h"

int convertColor (int color)
{
	switch (color)
	{
		case 1:
			return 'w';
		case -1:
			return 'b';
		case 'w':
			return 1;
		case 'b':
			return -1;
	}
}

void swap (Piece * a, Piece * b)
{
	Piece tmp = * a;
	* a = * b;
	* b = tmp;
}
