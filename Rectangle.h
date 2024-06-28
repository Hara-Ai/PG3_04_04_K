#pragma once
#include"Shape.h"
#include <iostream>

class Rectangle : public Shape 
{
private:

    double width;
    double height;

public:

    Rectangle(double w, double h) : width(w), height(h) {}

    double size() const override 
    {
        return width * height;
    }

    void draw() const override 
    {
        std::cout << "Rectangle Area: " << size() << std::endl;
    }
};