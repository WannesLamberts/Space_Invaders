//
// Created by wannes on 18.01.20.
//

#ifndef SPACE_INVADERS_SHIELDMODEL_H
#define SPACE_INVADERS_SHIELDMODEL_H
#include "../../EntityModel.h"
namespace Entity{


class ShieldModel:public Entity::EntityModel
{
        int healthpoints;

public:
        int getHealthpoints() const;
        void setHealthpoints(int healthpoints);

public:
        ShieldModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints);
};
}
#endif // SPACE_INVADERS_SHIELDMODEL_H
