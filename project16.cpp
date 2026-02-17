#include<iostream>
#include<cstring>

int main()
{
	struct date {
		int day;
		int month;
		int year;
	};
	struct student {
		std::string name;
		date birthday;
	};
	
	struct student ivan = {"ivan", 16, 03, 2005};
	
	std::cout << ivan.name << " was born on " << ivan.birthday.day << "." << ivan.birthday.month << "." << ivan.birthday.year;
}