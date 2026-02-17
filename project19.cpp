#include<iostream>
#include<cmath>

int main()
{
	struct figure {
		float x;
		float y;
	};
	struct figure bottom = {0, 0};
	struct figure top = {5, 3};

	float area = std::fabs(top.x - bottom.x) * std::fabs(top.y - bottom.y);

	std::cout << "area: " << area;
}