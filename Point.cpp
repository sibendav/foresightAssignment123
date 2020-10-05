//******** BALL-FILTER ********
//Author: Simha Ben-David
//The Point.cpp class
//The file is detailing the functions from Point class

#include "Point.h"

//ctr functions
Point::Point(double X, double Y, double Z)
	:x(X), y(Y), z(Z) { }

Point::Point(const Point& p){
	x = p.x;
	y = p.y;
	z = p.z;
}

//Getters
double Point::getX() const{
	return x;
}
double Point::getY() const{
	return y;
}
double Point::getZ() const{
	return z;
}

//Setters
void Point::setX(double X){
	x = X;
}
void Point::setY(double Y){
	y = Y;
}
void Point::setZ(double Z){
	y = Z;
}

//Prints point' value
void Point::print() const{
	cout << '(' << x << ',' << y << ',' << z <<")\n";
}
//Overloading operator=
Point& Point::operator=(const Point& p1)
{
	x = p1.x;
	y = p1.y;
	z = p1.z;
	return *this;
}