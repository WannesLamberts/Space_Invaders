//
// Created by wannes on 22.12.19.
//

#ifndef SPACE_INVADERS_ALIENSHIPMODEL_H
#define SPACE_INVADERS_ALIENSHIPMODEL_H
#include "../EnemyModel.h"
namespace Entity {
/**
 * \brief the model of an alienship
 */
class AlienShipModel : public Entity::EnemyModel
{
public:
        /**
         * \brief the constructor of an alienshipmodel
         * @param position
         * @param size
         * @param healthpoints
         * @param speed
         */
        AlienShipModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints, double speed);
};
} // namespace Entity
#endif // SPACE_INVADERS_ALIENSHIPMODEL_H
