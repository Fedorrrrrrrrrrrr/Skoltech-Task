//
// Created by FRusi on 22.06.2023.
//

#include "Line.h"

template <typename T1, typename T2>
Line<T1, T2>::Line(T1 startPoint, T2 finishPoint)
{
    changeLine(startPoint, finishPoint);
}

template<typename T1, typename T2>
void Line<T1, T2>:: changeLine(T1 startPoint, T2 finishPoint)
{
    if (HelperFigure::isNumericVariable(startPoint) &&
        HelperFigure::isNumericVariable(finishPoint))
    {
        m_startPoint = startPoint;
        m_finishPont = finishPoint;
    }
    else
    {
        m_startPoint = 0;
        m_finishPont = 0;
    }
    setPerimeter();
}

template<typename T1, typename T2>
double Line<T1, T2>::getPerimeter() const
{
    return m_perimeter;
}

template<typename T1, typename T2>
void Line<T1, T2>::setPerimeter()
{
    m_perimeter = m_finishPont - m_startPoint;
}