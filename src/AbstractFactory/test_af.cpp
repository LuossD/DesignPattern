//
// Created by hg on 3/23/23.
//

#include "AbstractFactory/SpringSkinFactory.h"
#include "AbstractFactory/SummerSkinFactory.h"
int main()
{
    SkinFactory* skinFactory = new SpringSkinFactory();

    skinFactory->createButton()->click();
    skinFactory->createText()->display();
    skinFactory->createComboBox()->select();

    skinFactory = new SummerSkinFactory();
    skinFactory->createComboBox()->select();
//    Logger* logger = factory->createLogger();
//    logger->log();

    return 0;
}