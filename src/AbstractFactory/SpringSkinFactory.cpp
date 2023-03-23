//
// Created by hg on 3/23/23.
//

#include "AbstractFactory/SpringSkinFactory.h"

Button *SpringSkinFactory::createButton() {
    return new SpringButton();
}

Text *SpringSkinFactory::createText() {
    return new SpringText;
}

ComboBox *SpringSkinFactory::createComboBox() {
    return new SpringComboBox;
}
