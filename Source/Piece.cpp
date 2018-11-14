// Piece implementation (+ subsequent inheritences)

#include "../Header/Piece.h"

Piece :: Piece (int color, int x, int y, Character attr)
{
	this->color = convertColor (color);
	this->attr = attr;
	this->x = x;
	this->y = y;
	isCaptured = false;
}

char Piece :: getColor () {return color;}
int Piece :: getX () {return x;}
int Piece :: getY () {return y;}
int [[][]] Piece :: getValidMoves () {} // ?
int Piece :: getChessValue () { return chessVal;}
double Piece :: getValue () {return value;}
bool Piece :: isCaptured () {return isCaptured;}
char * Piece :: getType () {return type;}
char Piece :: getSymbol () {return symbol;}
int Piece :: getID () {return id;}
void Piece :: getCaptured () {isCaptured = true;}
Piece Piece :: getPiece (int x, int y) {} // ?
bool Piece :: jump (int x, int y)
{
	if () return false;
	else
	{
		this->x = x;
		this->y = y;
		return 
}

int [[][]] Piece :: getMoves () {} // ?
bool Piece :: isOppositeColor (char color) {return this->color != color;}
bool Piece :: isSameColor (char color) {return this->color == color;}

Pawn :: Pawm (int id, int color, int x, int y, Character attr)
: Piece (id, color, x, y, attr)
{
	type = "Pawn";
	symbol = 'P';
	this->id = id;
}


bool Pawn :: move (int dx, int dy) {return move (x + dx

bool Pawn :: enPassage (int side) {return move (side, color);}

Knight :: Knight (int id, int color, int x, int y, Character attr)
: Piece (id, color, x, y, attr)
{
	type = "Knight";
	symbol = 'N';
	this->id = id;
}

Bishop :: Bishop (int id, int color, int x, int y, Character attr)
: Piece (id, color, x, y, attr)
{
	type = "Bishop";
	symbol = 'B';
	this->id = id;
}

Rook :: Rook (int id, int color, int x, int y, Character attr)
: Piece (id, color, x, y, attr)
{
	type = "Rook";
	symbol = 'R';
	this->id = id;
}

Queen :: Queen (int id, int color, int x, int y, Character attr)
: Piece (id, color, x, y, attr)
{
	type = "Queen";
	symbol = 'Q';
	this->id = id;
}

King :: King (int id, int color, int x, int y, Character attr)
: Piece (id, color, x, y, attr)
{
	type = "King";
	symbol = 'K';
	this->id = id;
}
