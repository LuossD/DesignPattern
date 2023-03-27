//
// Created by hg on 3/27/23.
//

#include "Adapter/Adapter.h"
#include <iostream>
void Adaptee::SpecificRequest() {
    std::cout << "Adaptee::SpecificRequest()" << std::endl;
}

void Adapter::Request() {
    std::cout << "Adapter::Request()" << std::endl;
    SpecificRequest();
    std::cout << "----------------------------" << std::endl;
}

//对象模式的Adapter
Adapter1::Adapter1() : adaptee_(new Adaptee)
{
}

Adapter1::Adapter1(Adaptee* adaptee)
{
    adaptee_ = adaptee;
}

Adapter1::~Adapter1()
{
    if(adaptee_)
    {
        delete adaptee_;
    }
}

void Adapter1::Request()
{
    std::cout << "Adapter1::Request()" << std::endl;
    adaptee_->SpecificRequest();
    std::cout << "----------------------------" << std::endl;
}


