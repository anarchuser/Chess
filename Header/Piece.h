#ifndef PIECE_H_
#define PIECE_H_

// Piece Interface + Specifications

// Struct for the different attributes of pieces (for calculating their value)
typedef struct
{
	double offend;
	double defend;

	int captures;
} Character;

class Piece
{
	public:
		Piece (int id, int color, int x, int y, Character attr);

		Character attr;
		
		bool getColor ();
		int getX ();
		int getY ();
		int [[][]] getValidMoves ();
		int getChessVal ();
		double getValue ();
		bool isCaptured ();
		char * getType ();
		char getSymbol ();
		int getID ();
		void getCaptured ();
		Piece getPiece (int x, int y);

		// Jump: absolute coordinates
		// Move: relative coordinates
		bool jump (int x, int y);
		virtual bool move (int dx, int dy);
		virtual void capture (Piece victim);

	private:
		char color;
		int x;
		int y;
		int chessVal;
		double value;
		Character attr;
		bool isCaptured;
		char * type;
		char symbol;
		int id;

		int [[][]] getMoves ();
		bool isOppositeColor (char color);
		bool isSameColor (char color);
}

class Pawn: public Piece
{
	public:
		Pawn (int id, int color, int x, int y, Character attr) : Piece (id, color, x, y, attr);

		bool enPassage (int side);
		void promote (Piece piece); // ?

#endif
