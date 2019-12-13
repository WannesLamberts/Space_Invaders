//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_ENTITYMODEL_H
#define SPACE_INVADERS_ENTITYMODEL_H
#include <SFML/Graphics.hpp>
/**
 * \brief Model class for Entity this class handles all the data of Entity
 */
class EntityModel {
    private:
        /**
         * \brief the healthpoints of the Entity an Entity dies when the healthpoints are 0
         */
        int healthPoints;
        /**
         * \brief the value where the Entity is on the x-axis
         */
        double xVal;
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
};
#endif //SPACE_INVADERS_ENTITYMODEL_H
