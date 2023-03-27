//
// Created by hg on 3/27/23.
//

#include "Builder/HeroBuilder.h"

HeroBuilder::HeroBuilder() : heroActor_(new Actor())
{
}

void HeroBuilder::buildType() {
    heroActor_->setType("Hero");
}

void HeroBuilder::buildFace() {
    heroActor_->setFace("Handsome");
}

void HeroBuilder::buildCostume() {
    heroActor_->setCostume("armour");
}

void HeroBuilder::buildHair() {
    heroActor_->setHair("black");
}

std::shared_ptr<Actor> HeroBuilder::getActor() {
    return heroActor_;
}


