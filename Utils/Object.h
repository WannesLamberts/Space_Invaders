//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_OBJECT_H
#define SPACE_INVADERS_OBJECT_H
#include "../MVCAbstract/ControllerAbstract.h"
#include <memory>
namespace Utils{
struct Object{
        std::shared_ptr<ViewAbstract> v;
        std::shared_ptr<ModelAbstract> m;
        std::shared_ptr<ControllerAbstract> c;
        Object(const std::shared_ptr<ViewAbstract>& v, const std::shared_ptr<ModelAbstract>& m,
               const std::shared_ptr<ControllerAbstract>& c)
            : v(v), m(m), c(c)
        {
        }
        Object() {}
};
}
#endif // SPACE_INVADERS_OBJECT_H
