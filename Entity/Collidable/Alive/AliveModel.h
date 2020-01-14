//
// Created by wannes on 20.12.19.
//

#ifndef SPACE_INVADERS_ALIVEMODEL_H
#define SPACE_INVADERS_ALIVEMODEL_H
#include "../../EntityModel.h"

namespace Entity{


class AliveModel : public Entity::EntityModel{
protected:
public:
        AliveModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints, double speed);

protected:
        int healthpoints;
        int fireCooldown;
        double speed;

public:
        int getHealthpoints() const;
        void setHealthpoints(int healthpoints);
        int getFireCooldown() const;
        void setFireCooldown(int fireCooldown);

public:
        bool moveLeft();
        bool moveRight();
};
}
#endif // SPACE_INVADERS_ALIVEMODEL_H
