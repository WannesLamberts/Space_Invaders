//
// Created by wannes on 22.12.19.
//

#ifndef SPACE_INVADERS_ALIENSHIPMODEL_H
#define SPACE_INVADERS_ALIENSHIPMODEL_H
#include "../AliveModel.h"
namespace Entity {

class AlienShipModel : public Entity::AliveModel
{
        bool right;


public:
        bool isRight() const;
        void setRight(bool right);
        bool moveDown();


public:
        AlienShipModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints, double speed);
};
}
#endif // SPACE_INVADERS_ALIENSHIPMODEL_H
