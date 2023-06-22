//
// Created by FRusi on 22.06.2023.
//

#ifndef TASKSKOLTECH_CIRCLE_H
#define TASKSKOLTECH_CIRCLE_H

#include "Figure.h"
#include "HelperFigure.h"

template <typename T>
class Circle : public Figure
{
public:

    explicit Circle(T radius);
    void setRadius(T radius);
    double getPerimeter() const override;

private:
    double m_radius;
    double m_perimeter;

    void setPerimeter();

};

#endif //TASKSKOLTECH_CIRCLE_H
