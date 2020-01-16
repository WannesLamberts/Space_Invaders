//
// Created by wannes on 16.01.20.
//

#ifndef SPACE_INVADERS_LIFEVIEW_H
#define SPACE_INVADERS_LIFEVIEW_H
#include "../../../EntityView.h"
#include "../PlayerShip/PlayerShipModel.h"
namespace Entity{


class LifeView : public Entity::EntityView
{
public:
        LifeView(const std::__shared_ptr<sf::RenderWindow>& w,std::shared_ptr<ModelAbstract> model);
        void generateShape();
        void update();
        sf::Font font;

};
}
#endif // SPACE_INVADERS_LIFEVIEW_H
