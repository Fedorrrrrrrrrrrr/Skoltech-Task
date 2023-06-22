//
// Created by FRusi on 22.06.2023.
//

#ifndef TASKSKOLTECH_SQUARE_H
#define TASKSKOLTECH_SQUARE_H

#include "Figure.h"
#include "HelperFigure.h"

template <typename T>
class Square : public Figure
{
    explicit Square(T side);

    void setSide(T side);

    double getPerimeter() const override;

private:
    T m_side;
    double m_perimeter;

    void setPerimeter();
};


#endif //TASKSKOLTECH_SQUARE_H
