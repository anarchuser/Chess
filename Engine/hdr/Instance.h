//
// Created by aaron on 29/01/2019.
//

#ifndef CHESS_INSTANCE_H
#define CHESS_INSTANCE_H

#include "engine.h"

#include "stdengine.h"
#include "Color.h"

class Instance {
public:
private:
    Board board;

    Color white = new Color (Color_e.white);
    Color black = new Color (Color_e.black);


};


#endif //CHESS_INSTANCE_H
