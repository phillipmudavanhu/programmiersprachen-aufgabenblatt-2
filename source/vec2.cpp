#include "vec2.hpp"

// Default Constructor Method
Vec2::Vec2()
  : x(0), y(0){
}

// User Defined Constructor Method
Vec2::Vec2(float x, float y) 
  : x(x), y(y){
}

// Addition operator overloading
Vec2& Vec2::operator+=(Vec2 const& v){
	this -> x += v.x;
	this -> y += v.y;
      return *this; 
}

// Subtraction operator overloading
Vec2& Vec2::operator-=(Vec2 const& v){
	this -> x -= v.x;
	this -> y -= v.y;
      return *this; 
}

// Multiplication operator overloading
Vec2& Vec2::operator*=(float s){
	this -> x *= s;
	this -> y *= s;
	  return *this; 
}

// Division operator overloading
Vec2& Vec2::operator/=(float s){
   this -> x /= s;
   this -> y /= s;
    return *this;
}