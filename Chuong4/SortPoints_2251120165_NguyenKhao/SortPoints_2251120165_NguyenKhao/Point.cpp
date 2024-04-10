#include "Point.h"
#include<math.h>
ifstream& operator>>(ifstream& fi, Point& p)
{
	fi >> p.x;
	fi >> p.y;
	return fi;
	// TODO: insert return statement here
}

ostream& operator<<(ostream& out, Point& p)
{
	out << "(" << p.x << "," << p.y << ")";
	return out;
	// TODO: insert return statement here
}

float Point::operator-(Point p)
{
	return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
}

bool Point::operator<(Point p)
{
	Point O;
	return O - *this < O - p;
}