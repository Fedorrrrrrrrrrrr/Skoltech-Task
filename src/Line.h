//
// Created by FRusi on 22.06.2023.
//

#ifndef TASKSKOLTECH_LINE_H
#define TASKSKOLTECH_LINE_H

#include "Figure.h"
#include "HelperFigure.h"

template <typename T1, typename T2>
class Line: public Figure
{
public:
    explicit Line(T1 startPoint, T2 finishPoint);

    void changeLine(T1 startPoint, T2 finishPoint);

    double getPerimeter() const override;

private:
    T1 m_startPoint;
    T2 m_finishPont;
    double m_perimeter;

    void setPerimeter();
};


#endif //TASKSKOLTECH_LINE_H
