//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_BULLETVIEW_H
#define SPACE_INVADERS_BULLETVIEW_H
#include "../../EntityView.h"
namespace Entity {
/**
 * \brief the view for a bullet
 */
class BulletView : public EntityView
{
public:
        /**
         * \brief constructor for a bulletview
         * @param w
         * @param model
         */
        BulletView(const std::__shared_ptr<sf::RenderWindow>& w, std::weak_ptr<ModelAbstract> model);
        /**
         * \brief generates the drawable for the bulletView
         */
        void generateShape();
        /**
         * \brief The texture that will be drawn on te sf::sprite shape
         */
        sf::Texture texture;
};
} // namespace Entity
#endif // SPACE_INVADERS_BULLETVIEW_H
