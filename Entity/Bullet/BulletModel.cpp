//
// Created by wannes on 21.12.19.
//

#include "BulletModel.h"
void Entity::BulletModel::travel() {
        setPosition(Utils::Vector2D(position.x, position.y+speed));
}
