//
// Created by hg on 3/22/23.
//

#ifndef DP_PLAYER_H
#define DP_PLAYER_H
#include <iostream>
#include "Observer.h"
class Player : public Observer
{
public:
    Player(std::string name, std::string state);
    void update(Subject* s);

private:
    std::string name_;
    std::string state_;
};


#endif //DP_PLAYER_H
