#include "circle.hpp"
#include "vec2.hpp"
#include <cmath>

Circle::Circle():
r_{0},
Cir1_{0.0,0.0} {
}


//C = 2(pi)r 
float Circle::circumference(){
	float area = 2 * 3.14159265 * r_ ;
	return area;
}

