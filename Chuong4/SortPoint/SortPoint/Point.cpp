#include "Point.h"
#include <iostream>
#include <fstream>

using namespace std;

ifstream& operator>>(ifstream& fin, Point &p)
{
    fin >> p.x;
    fin >> p.y;
    return fin;
}

ostream& operator<<(ostream& os, Point p)
{
    os << "("<< p.x<< ","<< p.y<< ")";
    return os;
}

bool Point::operator<(Point p)
{
    Point O;
    return (O-*this)<(O-p);
}

float Point::operator-(Point p)
{
    return sqrt((this->x-p.x)* (this->x - p.x) + (this->y-p.y)*(this->y-p.y));
}
