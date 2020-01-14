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
       virtual void tick()=0;
protected:
    std::shared_ptr<ModelAbstract> m;

public:
        const std::shared_ptr<ModelAbstract>& getM() const;
        const std::shared_ptr<ViewAbstract>& getV() const;
protected:
        std::shared_ptr<ViewAbstract> v;
};

#endif // SPACE_INVADERS_CONTROLLERABSTRACT_H
