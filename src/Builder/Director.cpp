//
// Created by hg on 3/27/23.
//

#include "Builder/Director.h"

std::shared_ptr<Actor> Director::construct(Builder* builder) {
    builder->buildType();
    builder->buildFace();
    builder->buildHair();
    builder->buildCostume();
    return builder->getActor();
}
