//
// Created by student on 16.12.19.
//

#ifndef SPACE_INVADERS_OBSERVER_H
#define SPACE_INVADERS_OBSERVER_H
#include "../Utils/Vector2D.h"
/**
 * \brief the observer from the observerpattern
 */
class Observer
{
public:
        /**
         * \brief gets called when the subject does notify observers this function is used for updating this class when
         * the subject calls notifyobservers
         */
        virtual void update() = 0;
};

#endif // SPACE_INVADERS_OBSERVER_H
