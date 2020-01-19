//
// Created by wannes on 18.01.20.
//

#ifndef SPACE_INVADERS_ENEMYMODEL_H
#define SPACE_INVADERS_ENEMYMODEL_H
#include "../AliveModel.h"
namespace Entity {
/**
 * \brief the model of enemy
 */
class EnemyModel : public AliveModel
{
protected:
        /**
         * \brief is the model moving to the right or not
         */
        bool right;

public:
        /**
         * \brief getter for right
         * @return right
         */
        bool isRight() const;
        /**
         * \brief setter for right
         * @param right
         */
        void setRight(bool right);
        /**
         * \brief let the model move down with speed
         * @return if the model has moved down or not
         */
        bool moveDown();
        /**
         * \brief the constructor for EnemyModel
         * @param position
         * @param size
         * @param healthpoints
         * @param speed
         */
        EnemyModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints, double speed);
};
} // namespace Entity
#endif // SPACE_INVADERS_ENEMYMODEL_H
