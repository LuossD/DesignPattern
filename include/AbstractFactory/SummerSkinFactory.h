//
// Created by hg on 3/23/23.
//

#ifndef DP_SUMMERSKINFACTORY_H
#define DP_SUMMERSKINFACTORY_H

#include "SkinFactory.h"
#include "SummerButton.h"
#include "SummerText.h"
#include "SummerComboBox.h"
class SummerSkinFactory : public SkinFactory
{
public:
    Button* createButton() override;
    Text* createText() override;
    ComboBox* createComboBox() override;
};


#endif //DP_SUMMERSKINFACTORY_H
