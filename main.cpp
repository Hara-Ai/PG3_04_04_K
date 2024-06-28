#include <iostream>
#include <cmath>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() 
{
    Shape* shapes[2];
    shapes[0] = new Rectangle(3.0, 4.0);
    shapes[1] = new Circle(5.0);

    for (int i = 0; i < 2; ++i)
    {
        shapes[i]->draw();
    }

    for (int i = 0; i < 2; ++i) 
    {
        delete shapes[i];
    }

    return 0;
}