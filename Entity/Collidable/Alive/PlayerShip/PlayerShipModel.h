//
// Created by wannes on 14.12.19.
//

#ifndef SPACE_INVADERS_PLAYERSHIPMODEL_H
#define SPACE_INVADERS_PLAYERSHIPMODEL_H
#include "../AliveModel.h"
namespace Entity {

/**
 * \brief Model of the PlayerShip handles all the data for PlayerShip
 */
class PlayerShipModel : public AliveModel
{
        /**
         * \brief the socre of the model
         */
        int score;

public:
        /**
         * \brief the constructor of PlayershipModel
         * @param position
         * @param size
         * @param healthpoints
         * @param speed
         */
        PlayerShipModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints, double speed);
        /**
         * \brief setter for score
         * @param score
         */
        void setScore(int score);
        /**
         * \brief getter for score
         * @return score
         */
        int getScore() const;

public:
};
} // namespace Entity
#endif // SPACE_INVADERS_PLAYERSHIPMODEL_H
