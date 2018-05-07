#ifndef VEC2_HPP //This checks if the header is already declared some else.
#define VEC2_HPP //This then difines the header if not defined already.

struct Vec2
{
  //Constructors since the class is struct all the methods and variables are public by default
	    
  Vec2(); //default
  Vec2(float x, float y); //intialisation with parameters

  float x;
  float y;

  Vec2& operator+=(Vec2 const& v );
  Vec2& operator-=(Vec2 const& v );
  Vec2& operator*=(float s);
  Vec2& operator/=(float s);

};

//Declaration of Object Overloading operators
Vec2 operator+(Vec2 const& u, Vec2 const& v);
Vec2 operator-(Vec2 const& u, Vec2 const& v);
Vec2 operator*(Vec2 const& v, float s);
Vec2 operator/(Vec2 const& v, float s);
Vec2 operator*(float s, Vec2 const& v);

#endif  // VEC2_HPP