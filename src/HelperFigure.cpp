//
// Created by FRusi on 22.06.2023.
//

#include "HelperFigure.h"

template<typename T>
bool HelperFigure::isNumericVariable(T variable){
    return (typeid(variable) == typeid(int) || typeid(variable) == typeid(float)
            || typeid(variable) == typeid(double));
}