//******** BALL-FILTER ********
//Author: Simha Ben-David
//The Sphere.h class
//The class is presenting a Sphere

#include <cmath>
#include "Point.h"

#pragma once
using namespace std;

class Sphere
{
	//Private fileds of sphere in 3D 
	Point middle;
	double radius;
public:
	//ctr function
	Sphere(Point p = Point(), double r = 0); // p is sent as a ref
	Sphere(const Sphere& s);

	//Getters
	Point getMiddle() const;
	double getRadius() const;
	//Setters
	void setMiddle(const Point &p1);
	void setRadius(double myRadius);

	//Function that check if the point is inside or outside
	bool isInOrOutSphere(const Point p1) const;
};

