//******** BALL-FILTER ********
//Author: Simha Ben-David
//The Main class.cpp

#include "Image.h"
#include "Sphere.h"

//Using STL tools
#include <iterator> // for iterators 
#include <vector> // for vectors
#include <algorithm> // for algorithms

using namespace std;


void BallFilter(Sphere sphere, Image image)

/*----------------------------------- The function gets sphere and image -----------------------------------
--------- Purpose: printing the pixel border points of the image that inside and outside the sphere -------- */
{
	//Calling the function that creates all the points of the image' borders pixels
	vector<Point> allPoints = image.getAllPoints();

	//Declaration of the inside and outside points' vectors
	vector<Point> insidePoints;
	vector<Point> outsidePoints;

	//checking which point is indise or outside the sphere
	for (vector<Point>::iterator p = allPoints.begin(); p != allPoints.end(); p++)
	{
		if (sphere.isInOrOutSphere(*p) == true)
			insidePoints.push_back((*p));
		else
			outsidePoints.push_back((*p));
	}
	
	//Printing points value
	cout << "Inside Points: \n";
	for (vector<Point>::iterator ptr = insidePoints.begin(); ptr != insidePoints.end(); ptr++)
		(*ptr).print();
	cout << "Outside Points: \n";
	for (vector<Point>::iterator ptr = outsidePoints.begin(); ptr != outsidePoints.end(); ptr++)
		(*ptr).print();

}

int main() {

	//Creating a sphere that it's middle point is (0, 0, 0) and radius = 3
	Sphere sphere(Point(0, 0, 0), 3);

	//Creating the three points of the plane that image is sitting on 
	Point p[3];
	p[0] = Point(-3, 3, 0);
	p[1] = Point(3, 3, 0);
	p[2] = Point(3, -3, 0);
	//Creating an image with the points and chosing the resolution, 3X3=9 pixels
	Image image(p, 3, 3);

	//Calling the function that filters the image that inside the RGB-ball and outside it
	BallFilter(sphere, image);
	
	system("pause");

	return 0;
}