#include<iostream>
#include<cmath>

int main()
{
	struct point {
		double x;
		double y;
	};
	struct point point1;
	struct point point2;

	double& refx1 = point1.x;
	double& refx2 = point2.x;
	double& refy1 = point1.y;
	double& refy2 = point2.y;

	std::cout << "enter x and y: ";
	std::cin >> refx1 >> refy1;
	std::cout << "enter again: ";
	std::cin >> refx2 >> refy2;

	double d = pow(refx2 - refx1, 2) + pow(refy1 - refy1, 2);
	std::cout << "distance: " << sqrt(d);

}








