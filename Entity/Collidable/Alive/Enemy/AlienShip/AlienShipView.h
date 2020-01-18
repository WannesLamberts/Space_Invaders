//
// Created by wannes on 22.12.19.
//

#ifndef SPACE_INVADERS_ALIENSHIPVIEW_H
#define SPACE_INVADERS_ALIENSHIPVIEW_H
#include "../../../../EntityView.h"
namespace Entity {

class AlienShipView : public Entity::EntityView
{
public:
        AlienShipView(const std::__shared_ptr<sf::RenderWindow>& w,std::weak_ptr<ModelAbstract> model);
        void generateShape();
        /**
     * \brief The texture that will be drawn on te sf::sprite shape
     */
        sf::Texture texture;
};
}
#endif // SPACE_INVADERS_ALIENSHIPVIEW_H
