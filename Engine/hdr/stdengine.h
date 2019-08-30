//
// Created by aaron on 29/01/2019.
//

#ifndef CHESS_STDENGINE_H
#define CHESS_STDENGINE_H

#include "engine.h"

#include "Piece.h"

enum Color_e {white, black};
enum PieceValue_e {PawnV = 1, KnightV = 3, BishopV = 3, RookV = 5, QueenV = 9};
enum PieceID_e {Pawn, Knight, Bishop, Rook, Queen, King};

typedef struct
{
    int x, y;
} coordinate_s;

typedef struct
{
    Piece * piece;
    coordinate_s tile;
} move_s;

#endif //CHESS_STDENGINE_H
