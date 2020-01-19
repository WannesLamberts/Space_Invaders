//
// Created by wannes on 20.12.19.
//

#ifndef SPACE_INVADERS_ALIVEMODEL_H
#define SPACE_INVADERS_ALIVEMODEL_H
#include "../../EntityModel.h"

namespace Entity{

/**
 * \brief Model for all objects that can be seen as living objects
 */
class AliveModel : public Entity::EntityModel{
public:
        /**
         * \brief constructor for alivemodel
         * @param position
         * @param size
         * @param healthpoints
         * @param speed
         */
        AliveModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints, double speed);

protected:
        /**
         * \brief the healthpoints
         */
        int healthpoints;
        /**
         * \brief how many ticks it takes to be able to fire again
         */
        int fireCooldown;
        /**
         * \brief the amount that can be moved every tick with moveleft, moveright
         */
        double speed;

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
         * \brief getter for firecooldown
         * @return firecooldown
         */
        int getFireCooldown() const;
        /**
         * \brief setter for firecooldown
         * @param fireCooldown
         */
        void setFireCooldown(int fireCooldown);

public:
        /**
         * \brief moves the model left with speed
         * @return if the model has moved or not
         */
        bool moveLeft();
        /**
         * \brief moves the model right with speed
         * @return if the model has moved or not
         */
        bool moveRight();
};
}
#endif // SPACE_INVADERS_ALIVEMODEL_H
