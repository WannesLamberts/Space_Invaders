#include "ModelAbstract.h"
#include "ViewAbstract.h"
//
// Created by wannes on 15.12.19.
//
ViewAbstract* ModelAbstract::getObserver() const { return observer; }
void ModelAbstract::setObserver(ViewAbstract* observer) { ModelAbstract::observer = observer; }
