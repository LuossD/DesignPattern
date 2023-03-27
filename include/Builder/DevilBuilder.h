//
// Created by hg on 3/27/23.
//

#ifndef DP_DEVILBUILDER_H
#define DP_DEVILBUILDER_H

#include "Builder.h"
#include "Actor.h"
class DevilBuilder : public Builder
{
public:
    DevilBuilder();
    void buildType() override;
    void buildFace()override;
    void buildCostume() override;
    void buildHair() override;
    std::shared_ptr<Actor> getActor() override;

//    void build() override;
//    void build();
private:
    std::shared_ptr<Actor> devilActor_;
};


#endif //DP_DEVILBUILDER_H
