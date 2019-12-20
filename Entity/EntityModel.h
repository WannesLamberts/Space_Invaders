//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_ENTITYMODEL_H
#define SPACE_INVADERS_ENTITYMODEL_H

#include "../MVCAbstract/ModelAbstract.h"
#include <SFML/Graphics.hpp>

namespace Entity {
/**
 * \brief Model class for Entity this class handles all the data of Entity
 */
class EntityModel : public ModelAbstract
{
protected:
        /**
         * \brief the value where the Entity is on the x-axis
         */
        double xVal;
        /**
         * \brief the value where the Entity is on the y-axis
         */
        double yVal;

        double sizeX;
        double sizeY;

public:
        double getSizeY() const;

public:
        double getSizeX() const;

public:
        void setXVal(double xVal);

        void setYval(double yval);
public:
        /**
         * the contrustructor of EntityModel creates a Entity with healthpoints, xVal, Yval
         * @param healthPoints The healthPoints of the Entity
         * @param xVal The xVal of the Entity
         * @param Yval The yVal of the Entity
         */
        EntityModel(double xVal, double Yval);
        double getXVal() const;
        double getYVal() const;
        void notifyObservers(double, double);
        void setSizeX(double sizeX);
        void setSizeY(double sizeY);
};
} // namespace Entity
#endif // SPACE_INVADERS_ENTITYMODEL_H
