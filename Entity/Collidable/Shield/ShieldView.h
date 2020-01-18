//
// Created by wannes on 18.01.20.
//

#ifndef SPACE_INVADERS_SHIELDVIEW_H
#define SPACE_INVADERS_SHIELDVIEW_H
#include "../../EntityView.h"
namespace Entity{


class ShieldView:public Entity::EntityView
{
public:
        ShieldView(const std::__shared_ptr<sf::RenderWindow>& w, const std::weak_ptr<ModelAbstract>& model);
        void generateShape();
        sf::Texture texture;
};
}
#endif // SPACE_INVADERS_SHIELDVIEW_H
