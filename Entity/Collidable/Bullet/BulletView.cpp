//
// Created by wannes on 21.12.19.
//

#include "BulletView.h"
Entity::BulletView::BulletView(const std::__shared_ptr<sf::RenderWindow>& w,std::shared_ptr<ModelAbstract> model) : EntityView(w,model) {
        generateShape();
}
void Entity::BulletView::generateShape() {
        shape=std::make_shared<sf::Sprite>();

        texture.loadFromFile("../Sprites/bullet.png");
        std::dynamic_pointer_cast<sf::Sprite>(shape)->setTexture(texture);
}
