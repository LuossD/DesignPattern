//
// Created by hg on 3/22/23.
//

#ifndef DP_OBSERVER_H
#define DP_OBSERVER_H
class Subject;
class Observer
{
public:
    virtual void update(Subject* s) = 0;
};

#endif //DP_OBSERVER_H
