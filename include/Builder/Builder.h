//
// Created by hg on 3/27/23.
//

#ifndef DP_BUILDER_H
#define DP_BUILDER_H
#include <iostream>
#include <memory>
class Actor;
class Builder
{
public:
    virtual void buildType() = 0;
    virtual void buildFace() = 0;
    virtual void buildCostume() = 0;
    virtual void buildHair() = 0;
    virtual std::shared_ptr<Actor> getActor() = 0;

//    virtual void build() = 0; ///if using without direcotr
    virtual void build() {
        buildType();
        buildFace();
        buildCostume();
        buildHair();
    }
};
#endif //DP_BUILDER_H
