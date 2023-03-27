//
// Created by hg on 3/27/23.
//

#ifndef DP_HEROBUILDER_H
#define DP_HEROBUILDER_H

#include "Builder.h"
#include "Actor.h"
class HeroBuilder : public Builder
{
public:
    HeroBuilder();
    void buildType() override;
    void buildFace()override;
    void buildCostume() override;
    void buildHair() override;
    std::shared_ptr<Actor> getActor() override;

//    void build() override;
private:
    std::shared_ptr<Actor> heroActor_;
};


#endif //DP_HEROBUILDER_H
