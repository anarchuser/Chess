// Class Instance implementation

#include "../Header/Instance.h"

Instance :: Instance ()
{
	white = new Color (true);
	black = new Color (false);
	
	size = BOARD_SIZE;
	turn = 0;
}
