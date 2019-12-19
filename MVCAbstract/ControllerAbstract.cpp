//
// Created by wannes on 17.12.19.
//

#include "ControllerAbstract.h"
ControllerAbstract::ControllerAbstract(const std::shared_ptr<ModelAbstract> &m, const std::shared_ptr<ViewAbstract> &v)
        : m(m), v(v) {}