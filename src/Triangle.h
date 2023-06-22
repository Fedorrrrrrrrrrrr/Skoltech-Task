//
// Created by FRusi on 22.06.2023.
//

#ifndef TASKSKOLTECH_TRIANGLE_H
#define TASKSKOLTECH_TRIANGLE_H

#include "Figure.h"
#include "HelperFigure.h"

template <typename T1, typename T2, typename T3>
class Triangle: public Figure
{
public:
    explicit Triangle(T1 side1, T2 side2, T3 side3);

    void setSide1(T1 side1);

    void setSide2(T2 side2);

    void setSide3(T3 side3);

    double getPerimeter() const override;

private:
    T1 m_side1;
    T2 m_side2;
    T3 m_side3;
    double m_perimeter;

    void setPerimeter();
};


#endif //TASKSKOLTECH_TRIANGLE_H
