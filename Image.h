//******** BALL-FILTER ********
//Author: Simha Ben-David
//The Image.h class
//The class is presenting a Image

#pragma once
#include "Point.h"
#include <vector> // for vectors 
#include <algorithm>

using namespace std;

class Image
{
//the Private fields of the image

	//Trhee points of the image bourder, gotten by clock order
	Point points[3]; 
	//Resolution factors
	int pixelX;
	int pixelY;
public:
	//ctr functions
	Image();
	Image(const Image &i);
	Image(Point p[], int px, int py);
	
	//The function that returns all of the images' pixels border points	
	vector<Point> getAllPoints() const;
};

