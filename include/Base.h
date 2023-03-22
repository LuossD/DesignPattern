//
// Created by hg on 3/22/23.
//

#ifndef DP_PLAYER_H
#define DP_PLAYER_H

#include "Subject.h"
class Player : public Subject
{
public:
    Player();
    void attach(Observer* o);
    void detach(Observer* o);
    void change(std::string newState);
    void notifyAll();
    void setState(const std::string& newState);
    const std::string getState() const;

private:
    string state_;
};


#endif //DP_PLAYER_H
