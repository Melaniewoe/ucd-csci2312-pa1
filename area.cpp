//
//  area.cpp
//  Pa 1
//

#include <cmath>
#include "Point.h"

using namespace std;

//computes the area within the triangle

double computeArea(const Point &a, const Point &b, const Point &c)

{
    
    
    // sets variables for Area
    
    double hyp  =  c.distanceTo(a);
    double opp  =  a.distanceTo(b);
    double adj  =  b.distanceTo(c);
    
    // calculate semiperimeter
    double s = (hyp + opp + adj)/2;
    
    // calculate area
    
    return sqrt(s * (s - hyp)*(s - opp)* (s - adj));
    
    
    
    
}