//******** BALL-FILTER ********
//Author: Simha Ben-David
//The Image.cpp class
//The file is detailing the functions from Image class

#include "Image.h"

//perameter ctr
Image::Image(Point p[], int px, int py)
{
	for (int i = 0; i < 3; i++)
		points[i] = p[i];
	pixelX = px;
	pixelY = py;
}
//defult ctr
Image::Image()
{
	pixelX = 0;
	pixelY = 0;
}
//copy ctr
Image::Image(const Image & i)
{
	pixelX = i.pixelX;
	pixelY = i.pixelY;
	for (int j = 0; j < 3; j++)
		points[j] = i.points[j];
}

/* -----------------------------The number of returning points is (pixelX+1)*(pixelY+1)-----------------------------
-----Because the number of the pixels is pixelX*pixelY, so the points of the border will include the image --------*/
vector<Point> Image::getAllPoints() const
{
	int pixelNumber = pixelX * pixelY;
	vector<Point> allPoints = vector<Point>();

	//calculating the constant move value of x/y/z
	double moveX = (abs(points[1].getX() - points[0].getX())) / (pixelX);
	double moveY = (abs(points[2].getY() - points[1].getY())) / (pixelY);
	double moveZ = (abs(points[2].getZ() - points[0].getZ())) / (pixelNumber);

	//Creating the points of the pixels' border
    int i=0;
	for (double x = points[0].getX(); x <= points[1].getX(); x += moveX)
		for (double y = points[1].getY(); y >= points[2].getY(); y -= moveY)
		{
			if(points[2].getZ()<= points[0].getZ())
				for (double z = points[2].getZ(); z <= points[0].getZ(); z += moveZ)
				{
					allPoints.push_back(Point(x, y, 0));
					i++;
				}
			else
				for (double z = points[2].getZ(); z >= points[0].getZ(); z -= moveZ)
				{
					allPoints.push_back(Point(x, y, 0));
					i++;
				}
		}

	return allPoints;
}

