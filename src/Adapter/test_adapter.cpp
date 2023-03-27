//
// Created by hg on 3/27/23.
//

#include "Adapter/Adapter.h"
int main()
{
    //类模式Adapter
    Target* pTarget = new Adapter();
    pTarget->Request();

    //对象模式Adapter1
    Adaptee* ade = new Adaptee();
    Target* pTarget1= new Adapter1(ade);
    pTarget1->Request();

    //对象模式Adapter2
    Target* pTarget2 = new Adapter1();
    pTarget2->Request();

    delete pTarget;
    delete pTarget1;
    delete pTarget2;

    return 0;
}
