#ifndef PIECE_H_
#define PIECE_H_

// Piece Interface + Specifications

class Piece
{
	public:
		Piece (int id, int color, int x, int y, Character attr);

		Character attr;
		
		bool getColor ();
		Coord getCoord ();
		int getChessVal ();
		double getValue ();
		bool isCaptured ();
		char * getType ();
		char getSymbol ();
		int getID ();
		void getCaptured ();
		Coords getMoves ();

		virtual bool jump (int x, int y);
		virtual bool move (int dx, int dy);
		virtual void capture (Piece victim);

	private:
		char color;
		Coord coord;
		int chessVal;
		double value;
		Character attr;
		bool isCaptured;
		char * type;
		char symbol;
		int id;

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
