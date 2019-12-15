//
// Created by wannes on 14.12.19.
//

#ifndef SPACE_INVADERS_PLAYERSHIPMODEL_H
#define SPACE_INVADERS_PLAYERSHIPMODEL_H
#include "../EntityModel.h"
namespace Entity {

/**
 * \brief Model of the PlayerShip handles all the data for PlayerShip
 */
class PlayerShipModel : public EntityModel
{
public:
        PlayerShipModel(int healthPoints, double xVal, double yval);
};
} // namespace Entity
#endif // SPACE_INVADERS_PLAYERSHIPMODEL_H
