//
// Created by hg on 3/22/23.
//

#ifndef DP_SUBJECT_H
#define DP_SUBJECT_H
#include <iostream>
#include <vector>
#include <memory>
using namespace std;
class Observer;
class Subject
{
public:
    virtual void attach(Observer* o) = 0;
    virtual void detach(Observer* o) = 0;
    virtual void notifyAll() = 0;
    virtual void change(std::string newState) = 0;
    virtual void setState(const std::string& newState) = 0;
    virtual const std::string getState() const = 0;

protected:
    shared_ptr<vector<shared_ptr<Observer>>> obsVec_;
};


#endif //DP_SUBJECT_H
