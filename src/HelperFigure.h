//
// Created by FRusi on 22.06.2023.
//

#ifndef TASKSKOLTECH_HELPERFIGURE_H
#define TASKSKOLTECH_HELPERFIGURE_H

#include <typeinfo>

class HelperFigure
{
public:
    template<typename T>
    static bool isNumericVariable(T variable);
};

#endif //TASKSKOLTECH_HELPERFIGURE_H
