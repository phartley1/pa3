#include <iostream>

using namespace std;

#include "Vector2D.h"

Vector2D::Vector2D()
{
	x = 0.0;
	y = 0.0;
}

Vector2D::Vector2D(double in_x, double in_y)
{
	x = in_x;
	y = in_y;
}

Vector2D operator * (Vector2D v, double d)
{
	return Vector2D((v.x * d), (v.y * d));
}

Vector2D operator / (Vector2D v, double d)
{
	return Vector2D((v.x / d), (v.y / d));
}

ostream& operator << (ostream& out, Vector2D v)
{
	out << "<" << v.x << ", " << v.y << ">";
	return out;
}