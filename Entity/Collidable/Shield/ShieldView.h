//
// Created by wannes on 18.01.20.
//

#ifndef SPACE_INVADERS_SHIELDVIEW_H
#define SPACE_INVADERS_SHIELDVIEW_H
#include "../../EntityView.h"
namespace Entity{

/**
 * \brief the view of the shield
 */
class ShieldView:public Entity::EntityView
{
public:
        /**
         * \brief contructor for shieldview calls generateshape
         * @param w
         * @param model
         */
        ShieldView(const std::__shared_ptr<sf::RenderWindow>& w, const std::weak_ptr<ModelAbstract>& model);
        /**
         * \brief generates the sprite of the shield
         */
        void generateShape();
        /**
         * \brief the texture for the sprite
         */
        sf::Texture texture;
};
}
#endif // SPACE_INVADERS_SHIELDVIEW_H
