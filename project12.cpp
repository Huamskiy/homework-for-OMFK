#include<iostream>
int main()
{
	struct students {
		std::string name;
		int grade;
	};
	students student[3];
	student[0].grade = 15;
	student[1].grade = 23;
	student[2].grade = 8;

	student[0].name = "maksim";
	student[1].name = "oleg";
	student[2].name = "sasha";



	int q = 0;
	int m = 0;

		for (int i = 0; i < 3; i++)
		{
			if (student[i].grade > student[i-1].grade)
			{
				m = i;
			}
			if (student[m].grade > student[q].grade)
			{
				q = m;
			}
		}
	std::cout << student[q].name << " have the highest grade";

}