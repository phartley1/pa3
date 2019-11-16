#include <iostream>
#ifndef POINT_2D
#define POINT_2D
#include "Vector2D.h"

class Point2D
{
	public:
	double x;
	double y;
	Point2D();
	Point2D(double, double);
};

Point2D operator + (Point2D, Vector2D);

std::ostream& operator << (std::ostream&, Point2D);

Vector2D operator - (Point2D, Point2D);

double GetDistanceBetween(Point2D, Point2D);

#endif