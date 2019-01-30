//
// Created by aaron on 29/01/2019.
//

#ifndef CHESS_ENTITY_H
#define CHESS_ENTITY_H

#include "control.h"


#include  "../../Engine/hdr/engine.h"

#include "../../Engine/hdr/Piece.h"

class Entity {
public:
    virtual response_s getAction (Piece * board [][], Piece * list_pieces);
private:
    Color_e color;
};


#endif //CHESS_ENTITY_H
