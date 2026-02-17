#include<iostream>
#include<string>

int main()
{
	struct students {
		std::string name;
		int grade;
	};

	const int x = 3;

	students student[x] = {
		{"oleg", 33},
		{"pupa", 49},
		{"lupa", 12}
	};

	int sum = 0;

	for (int i = 0; i < x; i++)
	{
		sum = sum + student[i].grade;
	}

	double avarage = sum / x;
	std::cout << "avarage grate is: " << avarage;
}