#include<iostream>
#include<cmath>

int main()
{
	struct point {
		double x;
		double y;
	};
	struct point point1;

	std::cout << "enter x and y: ";
	std::cin >> point1.x >> point1.y;

	double d = point1.x * point1.x + point1.y * point1.y;
	std::cout << "distance from origin: " << sqrt(d);
	
}