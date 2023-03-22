//
// Created by hg on 3/22/23.
//

#include "Base.h"
#include "Observer.h"
#include <algorithm>
Base::Base()
{
    obsVec_ = make_shared<vector<shared_ptr<Observer>>>();
}

void Base::attach(Observer *o) {
    shared_ptr<Observer> ptr(o);
    obsVec_->emplace_back(ptr);
}

void Base::detach(Observer *o) {
    for(auto it = obsVec_->begin(); it != obsVec_->end();)
    {
        if(it->get() == o)
        {
            it = obsVec_->erase(it);
        }
        else
        {
            ++it;
        }
    }
}

void Base::change(std::string newState) {
    setState(newState);
    cout << "Base state change to: " << newState << endl;
    notifyAll();
}

void Base::notifyAll() {
    cout << "notify all observers" << endl;
    for(auto item : *obsVec_)
    {
        item->update(this);
    }
}

void Base::setState(const string &newState) {
    state_ = newState;
}

const std::string Base::getState() const {
    return state_;
}
