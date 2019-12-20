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

        Utils::Vector2D position;
        Utils::Vector2D size;

public:
        const Utils::Vector2D& getSize() const;
        void setSize(const Utils::Vector2D& size);

public:
        const Utils::Vector2D& getPosition() const;
protected:

        void setPosition(const Utils::Vector2D& position);

public:
        /**
         * the contrustructor of EntityModel creates a Entity with healthpoints, xVal, Yval
         * @param healthPoints The healthPoints of the Entity
         * @param xVal The xVal of the Entity
         * @param Yval The yVal of the Entity
         */
        void notifyObservers(Utils::Vector2D position);
        EntityModel(const Utils::Vector2D& position);
};
} // namespace Entity
#endif // SPACE_INVADERS_ENTITYMODEL_H
