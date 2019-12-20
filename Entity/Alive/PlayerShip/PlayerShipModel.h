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
public:
        PlayerShipModel(double xVal, double yval, int healthpoints);
};
} // namespace Entity
#endif // SPACE_INVADERS_PLAYERSHIPMODEL_H
