#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	float x=0, y=0;
public:
	friend ifstream& operator>> (ifstream& fin, Point &p);
	friend ostream& operator<< (ostream& os, Point p);
	bool operator<(Point p);
	float operator-(Point p);//Tinh kc giua 2 diem
};

