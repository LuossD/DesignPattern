//
// Created by hg on 3/27/23.
//

#ifndef DP_DIRECTOR_H
#define DP_DIRECTOR_H

#include <iostream>
#include <memory>
#include "Builder.h"
class Actor;
class Director {
public:
    std::shared_ptr<Actor> construct(Builder* builder);
};


#endif //DP_DIRECTOR_H
