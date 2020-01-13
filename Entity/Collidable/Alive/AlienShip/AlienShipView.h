//
// Created by wannes on 22.12.19.
//

#ifndef SPACE_INVADERS_ALIENSHIPVIEW_H
#define SPACE_INVADERS_ALIENSHIPVIEW_H
#include "../../../EntityView.h"
namespace Entity {

class AlienShipView : public Entity::EntityView
{
public:
        AlienShipView(const std::__shared_ptr<sf::RenderWindow>& w);
        void generateShape();
};
}
#endif // SPACE_INVADERS_ALIENSHIPVIEW_H
