//
// Created by hg on 3/22/23.
//

#include "Player.h"
#include "Observer.h"
#include <algorithm>
Player::Player()
{
    obsVec_ = make_shared<vector<shared_ptr<Observer>>>();
}

void Player::attach(Observer *o) {
    obsVec_->emplace_back(o);
}

void Player::detach(Observer *o) {
    obsVec_->erase(find(obsVec_->begin(), obsVec_->end(), o));
}

void Player::change(std::string newState) {
    setState(newState);
    cout << "state is: " << newState << endl;
    notifyAll();
}

void Player::notifyAll() {
    cout << "notify all observers" << endl;
    for(auto item : *obsVec_)
    {
        item->update(this);
    }
}

void Player::setState(const string &newState) {
    state_ = newState;
}

const std::string Player::getState() const {
    return state_;
}
