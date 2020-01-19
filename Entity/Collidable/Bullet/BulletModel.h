//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_BULLETMODEL_H
#define SPACE_INVADERS_BULLETMODEL_H
#include "../../../MVCAbstract/ControllerAbstract.h"
#include "../../EntityModel.h"

namespace Entity {
/**
 * \brief the model of a bullet
 */
class BulletModel : public EntityModel
{
private:
        /**
         * \brief the speed of a bullet (how mutch it moves every tick of the game
         */
        double speed;
        /**
         * is the bullet from the player or not
         */
        bool friendly;

public:
        /**
         * \brief let's the bullet fly
         * @return a boolean that says if the bullet has moved or not
         */
        bool travel();
        /**
         * \brief constructor for the bullet
         * @param position
         * @param size
         * @param speed
         * @param friendly
         */
        BulletModel(const Utils::Vector2D& position, const Utils::Vector2D& size, double speed, bool friendly);
        /**
         * \brief getter for friendly
         * @return friendly
         */
        bool isFriendly() const;
};
} // namespace Entity
#endif // SPACE_INVADERS_BULLETMODEL_H
