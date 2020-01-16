//
// Created by wannes on 14.12.19.
//

#include "PlayerShipModel.h"

Entity::PlayerShipModel::PlayerShipModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints,
                                         double speed)
    : AliveModel(position, size, healthpoints, speed)
{
        score=0;
}
int Entity::PlayerShipModel::getScore() const { return score; }
void Entity::PlayerShipModel::setScore(int score) { PlayerShipModel::score = score;
notifyObservers();}
