//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_OBJECT_H
#define SPACE_INVADERS_OBJECT_H
#include "../MVCAbstract/ControllerAbstract.h"
#include <memory>
namespace Utils{
/**
 * \brief an object in the game that bundles view model en controller
 */
struct Object{
        /**
         * \brief the view of the object
         */
        std::shared_ptr<ViewAbstract> v;
        /**
         * \brief the model of the object
         */
        std::shared_ptr<ModelAbstract> m;
        /**
         * \brief the controller of the object
         */
        std::shared_ptr<ControllerAbstract> c;
        /**
         * \brief contructor for object
         * @param v the view for the object
         * @param m the model for the object
         * @param c the controller for the object
         */
        Object(const std::shared_ptr<ViewAbstract>& v, const std::shared_ptr<ModelAbstract>& m,
               const std::shared_ptr<ControllerAbstract>& c)
            : v(v), m(m), c(c)
        {
        }
        /**
         * \brief empty contructor for object
         */
        Object() {}
};
}
#endif // SPACE_INVADERS_OBJECT_H
