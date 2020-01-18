//
// Created by wannes on 18.01.20.
//

#include "ShieldModel.h"
int Entity::ShieldModel::getHealthpoints() const { return healthpoints; }
void Entity::ShieldModel::setHealthpoints(int healthpoints) { ShieldModel::healthpoints = healthpoints; }
Entity::ShieldModel::ShieldModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints)
    : EntityModel(position, size), healthpoints(healthpoints)
{
}
