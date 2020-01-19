//
// Created by wannes on 17.12.19.
//

#ifndef SPACE_INVADERS_CONTROLLERABSTRACT_H
#define SPACE_INVADERS_CONTROLLERABSTRACT_H

#include "ModelAbstract.h"
#include "ViewAbstract.h"
#include <memory>
/**
 * \brief superclass of all controllers in the game this is the interface between model en view
 */
class ControllerAbstract
{
public:
        /**
         * \brief contructor for the controller
         * @param m the model for the controller
         * @param v the view for the controller
         */
        ControllerAbstract(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        /**
         * \brief getter for m
         * @return m
         */
        const std::shared_ptr<ModelAbstract>& getM() const;
        /**
         * \brief getter for v
         * @return v
         */
        const std::shared_ptr<ViewAbstract>& getV() const;
        /**
         * \brief does what the controller must do every game tick
         */
        virtual void tick() = 0;
protected:
        /**
         * \brief the model of the controller
         */
        std::shared_ptr<ModelAbstract> m;
        /**
         * \brief the view of the controller
         */
        std::shared_ptr<ViewAbstract> v;
};

#endif // SPACE_INVADERS_CONTROLLERABSTRACT_H
