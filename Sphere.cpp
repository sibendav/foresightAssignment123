//******** BALL-FILTER ********
//Author: Simha Ben-David
//The Sphere.cpp class
//The file is detailing the functions from Sphere class
#include "Sphere.h"

//ctr parameters function
Sphere::Sphere(Point p1, double myRadius) {
	setMiddle(p1);
	setRadius(myRadius);
}
//copy ctr function
Sphere::Sphere(const Sphere& s) {
	setMiddle(s.getMiddle());
	setRadius(s.getRadius());
}

//Getters
Point Sphere::getMiddle() const {
	return middle;
}
double Sphere::getRadius() const {
	return radius;
}

//Setters
void Sphere::setMiddle(const Point &p1)
{
	//middle = new Point(p1->getX, p1->getY, p1->getZ);
	middle = p1;
}
void Sphere::setRadius(double myRadius)
{
	radius = myRadius;
}

//Function that check if the point is inside or outside the sphere
bool Sphere::isInOrOutSphere(const Point p1) const
{
	// Euclidean distance algorithm
	float dx = (float)(middle.getX() - (p1).getX());
	float dy = (float)(middle.getY() - (p1).getY());
	float dz = (float)(middle.getZ() - (p1).getZ());

	if (sqrt(pow(dx, 2) + pow(dy, 2) + pow(dz, 2)) <= radius) //The point is in or on the sphere
		return true;
	else                 
		return false;
}

