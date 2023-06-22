//
// Created by FRusi on 22.06.2023.
//

#include "Triangle.h"

template <typename T1, typename T2, typename T3>
Triangle<T1, T2, T3>::Triangle(T1 side1, T2 side2, T3 side3)
{
    setSide1(side1);
    setSide2(side2);
    setSide3(side3);
}

template <typename T1, typename T2, typename T3>
void Triangle<T1, T2, T3>::setSide1(T1 side1)
{
    if (HelperFigure::isNumericVariable(side1))
    {
        m_side1 = side1;
        setPerimeter();
    }
    else
    {
        m_side1 = 0;
    }
}

template <typename T1, typename T2, typename T3>
void Triangle<T1, T2, T3>::setSide2(T2 side2)
{
    if (HelperFigure::isNumericVariable(side2))
    {
        m_side2 = side2;
        setPerimeter();
    }
    else
    {
        m_side2 = 0;
    }
}

template <typename T1, typename T2, typename T3>
void Triangle<T1, T2, T3>::setSide3(T3 side3)
{
    if (HelperFigure::isNumericVariable(side3))
    {
        m_side3 = side3;
        setPerimeter();
    }
    else
    {
        m_side3 = 0;
    }
}

template <typename T1, typename T2, typename T3>
double Triangle<T1, T2, T3>::getPerimeter() const
{
return m_perimeter;
}

template <typename T1, typename T2, typename T3>
void Triangle<T1, T2, T3>::setPerimeter()
{
    m_perimeter = m_side1 + m_side2 + m_side3;
}