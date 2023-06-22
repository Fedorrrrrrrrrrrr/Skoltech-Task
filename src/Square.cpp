//
// Created by FRusi on 22.06.2023.
//

#include "Square.h"

template<typename T>
Square<T>::Square(T side)
{
    setSide(side);
}

template<typename T>
void Square<T>::setSide(T side)
{
    if (HelperFigure::isNumericVariable(side))
    {
        m_side = side;
        setPerimeter();
    }
    else
    {
        m_side = 0;
    }
}

template<typename T>
double Square<T>::getPerimeter() const
{
    return m_perimeter;
}

template<typename T>
void Square<T>::setPerimeter()
{
    m_perimeter = m_side * 4;
}