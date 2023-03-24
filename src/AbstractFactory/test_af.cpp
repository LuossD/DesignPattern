//
// Created by hg on 3/23/23.
//

#include "AbstractFactory/SpringSkinFactory.h"
#include "AbstractFactory/SummerSkinFactory.h"
int main()
{
    SkinFactory* skinFactory = new SpringSkinFactory();

    Button* bt = skinFactory->createButton();
    Text* tx = skinFactory->createText();
    ComboBox* cb = skinFactory->createComboBox();
    bt->click();
    tx->display();
    cb->select();

    delete cb;
    delete skinFactory;
    skinFactory = new SummerSkinFactory();
    cb = skinFactory->createComboBox();
    cb->select();

    delete skinFactory;
    delete bt;
    delete tx;
    delete cb;
    return 0;
}