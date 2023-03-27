//
// Created by hg on 3/27/23.
//

#include "Builder/DevilBuilder.h"

DevilBuilder::DevilBuilder() : devilActor_(new Actor())
{

}

void DevilBuilder::buildType() {
    devilActor_->setType("Devil");
}

void DevilBuilder::buildFace() {
    devilActor_->setFace("ugly");
}

void DevilBuilder::buildCostume() {
    devilActor_->setCostume("nothing");
}

void DevilBuilder::buildHair() {
    devilActor_->setHair("red");
}

std::shared_ptr<Actor> DevilBuilder::getActor() {
    return devilActor_;
}

