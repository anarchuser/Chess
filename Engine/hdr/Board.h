//
// Created by aaron on 29/01/2019.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include "engine.h"

#include "Piece.h"

class Board {
public:
private:
    Piece * board [BOARD_SIZE][BOARD_SIZE];
    Piece pieces [COLORS][PIECES_PER_COLOR];
    
};


#endif //CHESS_BOARD_H
