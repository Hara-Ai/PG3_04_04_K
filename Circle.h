#pragma once

#include "Shape.h"
#include <iostream>
#include <cmath>

class Circle : public Shape 
{
private:

    double radius;
    float M_PI = 3.14;

public:

    Circle(double r) : radius(r) {}

    double size() const override
    {
        return M_PI * radius * radius;
    }

    void draw() const override 
    {
        std::cout << "Circle Area: " << size() << std::endl;
    }
};
