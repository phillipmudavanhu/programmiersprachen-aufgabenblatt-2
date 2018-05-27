#include "rectangle.hpp"
#include "vec2.hpp"
#include <cmath>

Rectangle::Rectangle():
  h_{0},
  w_{0},
  Rec_{0.0,0.0}{
}

Rectangle::Rectangle(Vec2 const& Rec1, float h, float w):
  h_{h},
  w_{w},
  Rec_{Rec1}{

}



void Rectangle::setHeight(float h){
	h_ = h;
}

float Rectangle::getHeight(){
	return h_;
}

void Rectangle::setWidth(float w){
	w_= w;
}

float Rectangle::getWidth(){
	return h_;
}

float Rectangle::areaOfRectangle(){
	float area = h_*w_;
	return area;
}
