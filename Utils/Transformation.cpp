//
// Created by wannes on 14.12.19.
//
#include "Transformation.h"
#include <iostream>

double Utils::Transformation::transX(double modelx,double screenx) {
        return ((modelx+4)/8)*screenx;
}
double Utils::Transformation::transY(double modely,double screeny) {
        return ((modely+3)/6)*screeny;
}
