//
// Created by wannes on 18.01.20.
//

#include "ShieldView.h"
Entity::ShieldView::ShieldView(const std::__shared_ptr<sf::RenderWindow>& w, const std::weak_ptr<ModelAbstract>& model)
    : EntityView(w, model)
{
        generateShape();
}
void Entity::ShieldView::generateShape() {
        shape=std::make_shared<sf::Sprite>();
        texture.loadFromFile("../Files/Sprites/shield.png");
        std::dynamic_pointer_cast<sf::Sprite>(shape)->setTexture(texture);
}
