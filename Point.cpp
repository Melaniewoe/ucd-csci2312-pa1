//
//  point.cpp
//  Pa 1
// Created by Melanie Woe


#include "Point.h"
#include <cmath>



//default constructor
Point::Point()
{
    x = 0;
    y = 0;
    z = 0;
}



Point::Point(double iniX, double iniY, double iniZ)
{
    x = iniX;
    y = iniY;
    z = iniZ;
}



//mutator methods
void Point:: setX(double newX)
{
    x = newX;
}

void Point::setY(double newY)
{
    y = newY;
}

void Point::setZ(double newZ)
{
    z = newZ;
}

//ancestor methods
double Point::getX() const
{
    return x;
}


double Point::getY() const
{
    return y;
}

double Point::getZ() const
{
    return z;
}


//distance between 2 points
double Point::distanceTo(const Point &dist) const
{
    
    double n1 = x - dist.getX();
    double n2 = y - dist.getY();
    double n3 = z - dist.getZ();
    
    
    
    return sqrt(pow(n1,2)+pow(n2, 2)+pow(n3,2));
    
}
