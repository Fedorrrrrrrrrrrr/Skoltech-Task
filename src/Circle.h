//
// Created by FRusi on 22.06.2023.
//

#ifndef TASKSKOLTECH_CIRCLE_H
#define TASKSKOLTECH_CIRCLE_H
#include <iostream>
#include "Figure.h"
#include "HelperFigure.h"

//template <typename T>
//class Circle : public Figure
//{
//public:
//
//    explicit Circle(T radius);
//
//    void setRadius(T radius);
//
//    double getPerimeter() const override;
//
//private:
//    double m_radius;
//    double m_perimeter;
//
//    void setPerimeter();
//
//};

template <typename T>
class Circle : public Figure
{
public:

    explicit Circle(T radius)
    {
        setRadius(radius);
    }

    void setRadius(T radius)
    {
        std::cout <<"HelperFigure::isNumericVariable(radius)" <<HelperFigure::isNumericVariable(radius);
        if (HelperFigure::isNumericVariable(radius))
        {
            m_radius = radius;
            setPerimeter();
        }
        else
        {
            m_radius = 0;
        }
    }

    double getPerimeter() const override
    {
        return m_perimeter;
    }

private:
    double m_radius;
    double m_perimeter;

    void setPerimeter()
    {
        m_perimeter = 2 * 3.14 * m_radius;
    }
};

#endif //TASKSKOLTECH_CIRCLE_H
