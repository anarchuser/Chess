//
// Created by aaron on 29/01/2019.
//

#ifndef CHESS_COLOR_H
#define CHESS_COLOR_H

#include "engine.h"

#include "stdengine.h"


#include "../../Control/hdr/control.h"

#include "../../Control/hdr/Human.h"
#include "../../Control/hdr/Algorithm.h"
#include "../../Control/hdr/AI.h"

class Color {
public:
    move_s getMove (Piece * board [][]);
private:
    Entity entity;
    Color_e color;
    Piece * list [PIECES_PER_COLOR];
};


#endif //CHESS_COLOR_H
