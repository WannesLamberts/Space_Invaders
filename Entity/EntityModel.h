//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_ENTITYMODEL_H
#define SPACE_INVADERS_ENTITYMODEL_H

#include <SFML/Graphics.hpp>
class EntityModel {
    private:
        int healthPoints;
        double xVal;
        double Yval;
    public:
    EntityModel(int healthPoints, double xVal, double Yval);
};


#endif //SPACE_INVADERS_ENTITYMODEL_H
