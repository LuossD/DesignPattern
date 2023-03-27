//
// Created by hg on 3/27/23.
//
#include "Builder/HeroBuilder.h"
#include "Builder/DevilBuilder.h"
#include "Builder/Director.h"
int main()
{
    Builder* builder = new HeroBuilder();
//    Director* director = new Director();
//    std::shared_ptr<Actor> actor = director->construct(Builder);
    builder->build();
    std::cout << builder->getActor()->getParts() << std::endl;

    delete builder;
    builder = new DevilBuilder();
    builder->build();
//    actor = director->construct(Builder);
    std::cout << builder->getActor()->getParts() << std::endl;

//    delete director;
    delete builder;

    return 0;
}