//
// Created by hg on 3/23/23.
//

#ifndef DP_SKINFACTORY_H
#define DP_SKINFACTORY_H

class Button;
class Text;
class ComboBox;
class SkinFactory
{
public:
    virtual Button* createButton() = 0;
    virtual Text* createText() = 0;
    virtual ComboBox* createComboBox() = 0;
    virtual ~SkinFactory() = default;
};

#endif //DP_SKINFACTORY_H
