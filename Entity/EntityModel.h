//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_ENTITYMODEL_H
#define SPACE_INVADERS_ENTITYMODEL_H

#include "../MVCAbstract/ModelAbstract.h"
namespace Entity {
/**
 * \brief Model class for Entity this class handles all the data of Entity
 */
class EntityModel : public ModelAbstract
{
protected:
        /**
         * \brief the position the entity
         */
        Utils::Vector2D position;
        /**
         * \brief the size of the entity
         */
        Utils::Vector2D size;
        /**
         * \brief setter for position calls notifyobservers if the position is valid
         * @param position
         * @return if the position is valid or not
         */
        bool setPosition(const Utils::Vector2D& position);

public:
        /**
         * \brief getter for the size
         * @return size
         */
        const Utils::Vector2D& getSize() const;
        /**
         * \brief setter for the size
         * @param size
         */
        void setSize(const Utils::Vector2D& size);
        /**
         * \brief checks if the given position is valid for the [-4,4][3,-3] interval
         * @param position
         * @return wether the position is valid or not
         */
        bool validPosition(Utils::Vector2D position);
        /**
         * \brief getter for position
         * @return position
         */
        const Utils::Vector2D& getPosition() const;
        /**
         * \brief updates all observers
         */
        void notifyObservers();
        /**
         * the contrustructor of EntityModel creates a Entity with healthpoints, position
         * @param healthPoints The healthPoints of the Entity
         * @param position The position of the Entity
         */
        EntityModel(const Utils::Vector2D& position, const Utils::Vector2D& size);
};
} // namespace Entity
#endif // SPACE_INVADERS_ENTITYMODEL_H
