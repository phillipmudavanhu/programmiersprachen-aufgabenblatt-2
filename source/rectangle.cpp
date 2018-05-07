#include "rectangle.hpp"
#include "vec2.hpp"
#include <cmath>

Rectangle::Rectangle():
 x_{0},
 y_{0}, 
 z_{0,0},
 rgb{0,0,0}{

}

Rectangle::Rectangle(Vec2 v, float x, float y):
x_{x},
y_{y},
v_{v},
rgb{0,0,0}{

}

Rectangle::Rectangle(Vec2 v,float x, float y, Color r):
x_Vec2 {x}, 
y_Vec2{y}, 
v_{v},
rgb{r}{

}

void Rectangle::setHeight(float h){
	x_r = h;
}

float Rectangle::getHeight(){
	return x_;
}

void Rectangle::setLength(float l){
	y_=l;
}

float Rectangle::getLength(){
	return y_;
}

float Rectangle::areaOfShape(){
	float a = x_*y_;
	return a;
}
