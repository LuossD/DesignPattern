//
// Created by hg on 3/23/23.
//

#ifndef DP_SPRINGSKINFACTORY_H
#define DP_SPRINGSKINFACTORY_H

#include "SkinFactory.h"
#include "SpringButton.h"
#include "SpringText.h"
#include "SpringComboBox.h"
class SpringSkinFactory : public SkinFactory
{
public:
    Button* createButton() override;
    Text* createText() override;
    ComboBox* createComboBox() override;
};


#endif //DP_SPRINGSKINFACTORY_H
