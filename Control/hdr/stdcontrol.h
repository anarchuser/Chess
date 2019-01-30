//
// Created by aaron on 29/01/2019.
//

#ifndef CHESS_STDCONTROL_H
#define CHESS_STDCONTROL_H

// List of Control entities
enum Entity_e {Human, Algorithm, AI};

// List of possible actions
enum Action_e {move};

typedef struct
{
    Action_e action;
    char message [20];
} response_s;

#endif //CHESS_STDCONTROL_H
