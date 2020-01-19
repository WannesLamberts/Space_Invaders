//
// Created by wannes on 22.12.19.
//

#ifndef SPACE_INVADERS_ALIENSHIPVIEW_H
#define SPACE_INVADERS_ALIENSHIPVIEW_H
#include "../../../../EntityView.h"
namespace Entity {
/**
 * \brief the view of an alienship
 */
class AlienShipView : public Entity::EntityView
{
public:
        /**
         * \brief the constructor of an alienshipview
         * @param w
         * @param model
         */
        AlienShipView(const std::__shared_ptr<sf::RenderWindow>& w, std::weak_ptr<ModelAbstract> model);
        /**
         * \brief generetates the drawable of an alienshipview
         */
        void generateShape();
        /**
         * \brief The texture that will be drawn on te sf::sprite shape
         */
        sf::Texture texture;
};
} // namespace Entity
#endif // SPACE_INVADERS_ALIENSHIPVIEW_H
