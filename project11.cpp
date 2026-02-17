#include<iostream>
#include<cstring>

int main()
{
	struct students {
		std::string name;
		int grade;
	};

	students student[3] = {
		{"ivan", 54},
		{"oleg", 20},
		{"misha", 103}
	};

	std::cout << "Results: " << '\n';
	for (int i = 0; i < 3; i++)
	{
		std::cout << student[i].name << " - " << student[i].grade << '\n';
	}


}