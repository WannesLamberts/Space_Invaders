//
// Created by wannes on 18.01.20.
//

#ifndef SPACE_INVADERS_SHIELDMODEL_H
#define SPACE_INVADERS_SHIELDMODEL_H
#include "../../EntityModel.h"
namespace Entity {

/**
 * \brief the model for the shield class
 */
class ShieldModel : public Entity::EntityModel
{
        /**
         * \brief the healtpoints of a shield if it is 0 the shield dies
         */
        int healthpoints;

public:
        /**
         * \brief getter for healthpoints
         * @return healthpoints
         */
        int getHealthpoints() const;
        /**
         * \brief setter for healthpoints
         * @param healthpoints
         */
        void setHealthpoints(int healthpoints);
        /**
         * \brief constructor for the Shieldmodel
         * @param position
         * @param size
         * @param healthpoints
         */
        ShieldModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints);
};
} // namespace Entity
#endif // SPACE_INVADERS_SHIELDMODEL_H
