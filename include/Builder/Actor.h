//
// Created by hg on 3/27/23.
//

#ifndef DP_ACTOR_H
#define DP_ACTOR_H
#include <iostream>

class Actor
{
public:
    void setType(const std::string& type);
    void setFace(const std::string& face);
    void setCostume(const std::string& costume);
    void setHair(const std::string& hair);

    std::string getParts() const;
private:
    std::string type_;
    std::string face_;
    std::string costume_;
    std::string hair_;
};


#endif //DP_ACTOR_H
