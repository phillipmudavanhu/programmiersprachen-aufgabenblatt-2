#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.cpp"

class Circle
{
public:
	
	Circle(); // default Constructor 
	
	Circle(Vec2 const& Cir1, float radius); 
	
	float r_;  
	Vec2 Cir1_; 


	//Getter
	float getradius();
	float areaOfCircle();
	float circumference();

	//Setter 
	void setRadius(float radius); 
	
}

#endif //CIRCLE_HPP