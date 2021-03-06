#include <iostream>
#include <cmath>

//Question 1: Distance from a Rectangle
//We expect this question to take approximately 20 - 40 minutes.
//Write a function that tests if a point falls within a specified distance(�dist�) of any part of a solid, 2D rectangle.
//The rectangle is specified by the bottom left corner, a width, and a height.
//A function prototype and data structures you can assume exist are supplied below.
//You may make additions to the structures if you deem it appropriate.
//If you answer in a different language, you should follow a similar format :
struct Point
{
	float x;
	float y;
};
struct Rectangle
{
	Point bottomLeft;
	float width;
	float height;
};
bool IsPointWithinDistOfRectangle(const Rectangle& rect, const Point& point, float dist)
{
	Point check1;
	
	check1.y = rect.bottomLeft.y + rect.height;
	check1.x = rect.bottomLeft.x + rect.width;

	if (abs(check1.x - point.x) == dist)
		return true;
	else if (abs(check1.y - point.y) == dist)
		return true;
	return false;
}
