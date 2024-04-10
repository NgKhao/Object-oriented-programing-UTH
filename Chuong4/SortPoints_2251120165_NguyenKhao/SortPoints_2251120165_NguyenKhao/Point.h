#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class Point
{
private:
	float x = 0;
	float y = 0;
public:
	friend ifstream& operator>>(ifstream& fi, Point& p);
	friend ostream& operator<<(ostream& out, Point& p);
	float operator-(Point p);
	bool operator<(Point p);
};

