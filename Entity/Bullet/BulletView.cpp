//
// Created by wannes on 21.12.19.
//

#include "BulletView.h"
Entity::BulletView::BulletView(const std::__shared_ptr<sf::RenderWindow>& w) : EntityView(w) {}
void Entity::BulletView::generateShape() {
        texture.loadFromFile("../Sprites/bullet.png");
        shape.setTexture(texture);
}
