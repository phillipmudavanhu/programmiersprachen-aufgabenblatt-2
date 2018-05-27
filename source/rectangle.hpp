#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.cpp"

class Rectangle
{
public:
	
	Rectangle(); // default Constructor 
	
	Rectangle(Vec2 const& Rec1, float x, float y); 
	
	float x_; 
	float y_; 
	Vec2 Rec1_; 


	//Getter
	float getHeight();
	float getLenght();
	float areaOfRectangle(); 

	//Setter 
	void setHeight(float x); 
	void setLenght(float y);

}

#endif //RECTANGLE_HPP