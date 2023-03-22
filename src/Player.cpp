//
// Created by hg on 3/22/23.
//

#include "Player.h"
#include "Subject.h"
Player::Player(std::string name, std::string state) : name_(name), state_(state)
{

}

void Player::update(Subject *s) {
    std::cout << "player: " << name_ << " state is: " << state_
    << " update to " << s->getState() << std::endl;
}
