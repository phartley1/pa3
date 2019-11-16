#include <iostream>
#ifndef VECTOR_2D
#define VECTOR_2D

class Vector2D
{
	public:
	double x;
	double y;
	Vector2D();
	Vector2D(double, double);
};

Vector2D operator * (Vector2D, double);

Vector2D operator / (Vector2D, double);

std::ostream& operator << (std::ostream&, Vector2D);

#endif