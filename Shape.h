#pragma once

class Shape 
{
public:
    virtual double size() const = 0; 
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};
