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
private:
        /**
         * \brief the healthpoints of the Entity an Entity dies when the healthpoints are 0
         */
        int healthPoints;
        /**
         * \brief the value where the Entity is on the x-axis
         */
        double xVal;


public:
        int getHealthPoints() const;
        void setHealthPoints(int healthPoints);
        double getXVal() const;
        void setXVal(double xVal);
        double getYval() const;
        void setYval(double yval);
        void moveLeft();
        void moveRight();
private:
        /**
         * \brief the value where the Entity is on the y-axis
         */
        double Yval;

public:
        /**
         * the contrustructor of EntityModel creates a Entity with healthpoints, xVal, Yval
         * @param healthPoints The healthPoints of the Entity
         * @param xVal The xVal of the Entity
         * @param Yval The yVal of the Entity
         */
        EntityModel(int healthPoints, double xVal, double Yval);
        void notify(double, double);
};
} // namespace Entity
#endif // SPACE_INVADERS_ENTITYMODEL_H
