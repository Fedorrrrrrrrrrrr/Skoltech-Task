//
// Created by FRusi on 22.06.2023.
//

#ifndef TASKSKOLTECH_RECTANGLE_H
#define TASKSKOLTECH_RECTANGLE_H

#include "Figure.h"
#include "HelperFigure.h"


template <typename T1, typename T2>
class Rectangle : public Figure
{
public:
    explicit Rectangle(T1 width, T2 height);

    void setWidth(T1 width);

    void setHeight(T2 height);

    double getPerimeter() const override;


private:
    T1 m_width;
    T2 m_height;
    double m_perimeter;

    void setPerimeter();
};


#endif //TASKSKOLTECH_RECTANGLE_H
