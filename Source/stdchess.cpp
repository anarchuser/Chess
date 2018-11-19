// Implementation for the standard Chess header

#include "../Header/stdchess.h"

#include <iostream>
#include <string>

using namespace std;

int rankToX (char rank)
{
	if (rank >= '1' && rank <= '8') return (rank - '0');
	else
	{
		cerr << "No valid Rank given (1-8)" << endl;
		return 0;
	}
}

int fileToY (char file)
{
	if (file >= 'a' && <= 'h') return (file - 'a' + 1);
	else
	{
		cerr << "No valid File given (a-h)" << endl;
		return 0;
	}
}

void printMove (string nota)
{
	cout << nota << endl;
}

void printMove (Move move)
{
	string nota = convertNotation (move);
	printMove (nota);
}

string convertMove (Move move)
{
	string nota = "";
	if (move.castle)
	{
		if (kingside) nota.append ("0-0\n");
		else nota.append ("0-0-0\n");
		cout << nota;
		return;
	}
	if (move.symbol != 'P') nota.append (move.symbol);
	else if (move.capture) nota.append (move.oldFile);
	if (disambigFile) nota.append (move.oldFile);
	if (disambigRank) nota.append (move.oldRank);
	if (move.capture) nota.append ('x');
	nota.append (move.file);
	nota.append (move.rank);
	if (move.promote) nota.append (move.newSymbol);
	if (move.drawOffer) nota.append (" (=)");
	else if (move.check) nota.append ("+");
	else if (move.mate) nota.append ("#");
	return nota;
}

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

void printResult (char symbol)
{
	switch (symbol)
	{
		case 'w':
			cout << "1-0\n";
			return;
		case 'b':
			cout << "0-1\n";
			return;
		default :
			cout << "1/2-1/2\n";
			return;
	}
}
