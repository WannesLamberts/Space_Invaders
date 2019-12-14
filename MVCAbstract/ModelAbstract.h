//
// Created by wannes on 14.12.19.
//

#ifndef SPACE_INVADERS_MODELABSTRACT_H
#define SPACE_INVADERS_MODELABSTRACT_H

#endif // SPACE_INVADERS_MODELABSTRACT_H
#include "ViewAbstract.h"
/**
 * \brief superclass of all model classes handles the data section of the game
 */
class ModelAbstract
{
        ViewAbstract* observer;
        virtual void notify(double,double)=0;
};