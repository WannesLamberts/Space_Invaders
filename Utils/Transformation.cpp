//
// Created by wannes on 14.12.19.
//

#include "Transformation.h"
Utils::Transformation* Utils::Transformation::i = nullptr;

Utils::Transformation* Utils::Transformation::getInstance() {
        if (!i)
                i=new Transformation;
        return i;


}