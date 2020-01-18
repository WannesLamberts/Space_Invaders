//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_ENTITYVIEW_H
#define SPACE_INVADERS_ENTITYVIEW_H

#include "../MVCAbstract/ViewAbstract.h"
#include "../Utils/Transformation.h"
#include "EntityModel.h"
namespace Entity {
/**
 * \brief View class for Entity this class handles the visual aspect of the game
 */
    class EntityView : public ViewAbstract {
    protected:
        /**
         * \brief the sf::Drawable that will be drawn on the window of the game
         */
        std::shared_ptr<sf::Drawable> shape;

    public:
        /**
         * \brief draws the shape on the sf::RenderWindow w
         * @param w the window where the shape gets drawn on.
         */
        void draw();
        virtual void update();
        void changeScale(Utils::Vector2D);
         virtual void generateShape()=0 ;

        EntityView(const std::__shared_ptr<sf::RenderWindow> &w,std::weak_ptr<ModelAbstract> model);


    };
}

#endif // SPACE_INVADERS_ENTITYVIEW_H
