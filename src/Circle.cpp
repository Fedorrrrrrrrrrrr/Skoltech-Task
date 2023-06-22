//
// Created by FRusi on 22.06.2023.
//

#include "Circle.h"

template<typename T>
Circle<T>::Circle(T radius)
{
    setRadius(radius);
}

template<typename T>
double Circle<T>::getPerimeter() const
{
    return m_perimeter;
}

template<typename T>
void Circle<T>::setRadius(T radius)
{
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

template<typename T>
void Circle<T>::setPerimeter()
{
    m_perimeter = 2 * 3.14 * m_radius;
}