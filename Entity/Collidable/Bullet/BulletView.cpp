//
// Created by wannes on 21.12.19.
//

#include "BulletView.h"
Entity::BulletView::BulletView(const std::__shared_ptr<sf::RenderWindow>& w, std::weak_ptr<ModelAbstract> model)
    : EntityView(w, model)
{
        generateShape();
}
void Entity::BulletView::generateShape()
{
        shape = std::make_shared<sf::Sprite>();

        texture.loadFromFile("../Files/Sprites/bullet.png");
        std::dynamic_pointer_cast<sf::Sprite>(shape)->setTexture(texture);
}
