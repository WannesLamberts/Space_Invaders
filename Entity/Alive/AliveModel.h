//
// Created by wannes on 20.12.19.
//

#ifndef SPACE_INVADERS_ALIVEMODEL_H
#define SPACE_INVADERS_ALIVEMODEL_H
#include "../EntityModel.h"

namespace Entity{


class AliveModel : public Entity::EntityModel{
private:
        int healthpoints;

public:
        void moveLeft();
        void moveRight();
        AliveModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints);
};
}
#endif // SPACE_INVADERS_ALIVEMODEL_H
