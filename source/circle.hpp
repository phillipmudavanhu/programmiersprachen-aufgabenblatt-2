#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.cpp"

class Circle
{
public:
	
	Circle(); // default Constructor 
	
	Circle(Vec2 const& Vec0, float x, float y); 
	
	float x_; 
	float y_; 
	Vec2 Vec0_; 


	//Getter
	float getHeight();
	float getLenght();
	float areaOfCircle();
	float circumference();

	//Setter 
	void setHeight(float x); 
	void setLenght(float y);

}

#endif //CIRCLE_HPP