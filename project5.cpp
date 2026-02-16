#include<iostream>

int main()
{
	struct figure {
		double width;
		double height;
	};
	struct figure figure1;
	double& refw = figure1.width;
	double& refh = figure1.height;

	std::cout << "enter width and height: ";
	std::cin >> refw >> refh;

	double s = refw * refh;
	double p = (refw + refh) * 2;

	std::cout << "area: " << s << '\n' << "perimeter: " << p;

}