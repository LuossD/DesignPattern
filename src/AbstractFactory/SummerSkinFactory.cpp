//
// Created by hg on 3/23/23.
//

#include "AbstractFactory/SummerSkinFactory.h"

Button *SummerSkinFactory::createButton() {
    return new SummerButton();
}

Text *SummerSkinFactory::createText() {
    return new SummerText();
}

ComboBox *SummerSkinFactory::createComboBox() {
    return new SummerComboBox();
}
