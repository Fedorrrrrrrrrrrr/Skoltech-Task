#include <iostream>

#include "src\Circle.h"
#include "src\Figure.h"
int main()
{
    Circle circle {5};
    std::cout <<"solution: " << circle.getPerimeter();
    return 0;
}
