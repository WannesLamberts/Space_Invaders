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
class EntityView : public ViewAbstract
{
protected:
        /**
         * \brief the model that has this as observer, I made a pointer to the model so that i don't have to implement
         * multiple update function with different parameters in my observer class. I did that so that i can have a
         * modular design and that notifyobservers from subject just calls update(), instead of checking all the types
         * and call form example update(position) if it is a playership view
         * and update(healthpoints) if it is a lifeview etc
         */
        std::weak_ptr<ModelAbstract> model;

public:
        /**
         * \brief draws the shape on w
         */
        void draw();
        /**
         * \brief changes the position of shape on the screen to the corresponding value in the model
         */
        virtual void update();
        /**
         * sets the size of the shape so that is corresponds to the size of the logic(So that the hitbox corresponds)
         * @param size the size of the logic
         */
        void changeScale(Utils::Vector2D size);
        /**
         * \brief generates shape
         */
        virtual void generateShape() = 0;
        /**
         * \brief contructor for entityview
         * @param w the window for the view
         * @param model the model for the view
         */
        EntityView(const std::__shared_ptr<sf::RenderWindow>& w, std::weak_ptr<ModelAbstract> model);
};
} // namespace Entity

#endif // SPACE_INVADERS_ENTITYVIEW_H
