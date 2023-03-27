//
// Created by hg on 3/27/23.
//

#include "Builder/Actor.h"

void Actor::setType(const std::string &type) {
    type_ = type;
}

void Actor::setFace(const std::string &face) {
    face_ = face;
}

void Actor::setCostume(const std::string &costume) {
    costume_ = costume;
}

void Actor::setHair(const std::string &hair) {
    hair_ = hair;
}

std::string Actor::getParts() const {
    return "Type: " + type_ + ", Face: " + face_ +
    ", Costume: " + costume_ + ", Hair: " + hair_;
}
