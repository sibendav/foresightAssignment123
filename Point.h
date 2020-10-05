//******** BALL-FILTER ********
//Author: Simha Ben-David
//The Point.h class
//The class is presenting a point

#pragma once
#include <iostream>
using namespace std;
class Point
{
	//Private fileds of point in 3D 
	double x;
	double y;
	double z;

public:
	//ctr functions
	Point(double X = 0, double Y = 0, double Z=0);
	Point(const Point& p);
	//Getters
	double getX() const;
	double getY() const;
	double getZ() const;

	//Setters
	void setX(double X);
	void setY(double Y);
	void setZ(double Z);

	//Prints point' value
	void print() const;

	//Overloading operator=
	Point& operator=(const Point& p1);
};