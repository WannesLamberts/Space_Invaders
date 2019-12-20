//
// Created by student on 16.12.19.
//

#ifndef SPACE_INVADERS_OBSERVER_H
#define SPACE_INVADERS_OBSERVER_H
#include "../Utils/Vector2D.h"

class Observer {
public:
    virtual void update(Utils::Vector2D,Utils::Vector2D)=0;

};


#endif //SPACE_INVADERS_OBSERVER_H
