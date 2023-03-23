//
// Created by hg on 3/22/23.
//

#ifndef DP_BASE_H
#define DP_BASE_H

#include "Subject.h"
class Base : public Subject
{
public:
    Base();
    void attach(Observer* o);
    void detach(Observer* o);
    void change(std::string newState);
    void notifyAll();
    void setState(const std::string& newState);
    const std::string getState() const;

private:
    string state_;
};


#endif //DP_BASE_H
