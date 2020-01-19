//
// Created by student on 19.12.19.
//

#ifndef SPACE_INVADERS_ENTITYCONTROLLER_H
#define SPACE_INVADERS_ENTITYCONTROLLER_H

#include "../MVCAbstract/ControllerAbstract.h"
#include "EntityModel.h"
#include "EntityView.h"
#include <memory>
namespace Entity {
/**
 * \brief Controller class for entity this is the interface between entitymodel and entityview
 */
class EntityController : public ControllerAbstract
{
public:
        /**
         * \brief contructor for EntityController it sets the scale of the view to it hitbox and calls notifyopservers
         * @param m the model of the controller
         * @param v the view of the controller
         */
        EntityController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        /**
         * \brief does what the controller must do every game tick
         */
        virtual void tick() = 0;
};

} // namespace Entity
#endif // SPACE_INVADERS_ENTITYCONTROLLER_H
