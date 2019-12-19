//
// Created by wannes on 17.12.19.
//

#ifndef SPACE_INVADERS_CONTROLLERABSTRACT_H
#define SPACE_INVADERS_CONTROLLERABSTRACT_H

#include <memory>
#include "ModelAbstract.h"
#include "ViewAbstract.h"
class ControllerAbstract
{
public:
    ControllerAbstract(const std::shared_ptr<ModelAbstract> &m, const std::shared_ptr<ViewAbstract> &v);

protected:
    std::shared_ptr<ModelAbstract> m;
    std::shared_ptr<ViewAbstract> v;
};

#endif // SPACE_INVADERS_CONTROLLERABSTRACT_H
