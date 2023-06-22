//
// Created by FRusi on 22.06.2023.
//

#include "Rectangle.h"

template <typename T1, typename T2>
Rectangle<T1, T2>::Rectangle(T1 width, T2 height)
{
    setWidth(width);
    setHeight(height);
}

template <typename T1, typename T2>
void Rectangle<T1, T2>::setWidth(T1 width)
{
    if (HelperFigure::isNumericVariable(width))
    {
        m_width = width;
        setPerimeter();
    }
    else
    {
        m_width = 0;
    }
}

template <typename T1, typename T2>
void Rectangle<T1, T2>::setHeight(T2 height)
{
    if (HelperFigure::isNumericVariable(height))
    {
        m_height = height;
        setPerimeter();
    }
    else
    {
        m_height = 0;
    }
}

template <typename T1, typename T2>
double Rectangle<T1, T2>::getPerimeter() const
{
    return m_perimeter;
}

template <typename T1, typename T2>
void Rectangle<T1, T2>::setPerimeter()
{
    m_perimeter = (m_width + m_height) * 2;
}