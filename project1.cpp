#include<iostream>
#include<cstring>
#include<string>

int main()
{
	struct book {
		std::string title;
		std::string name;
		int year;
	};
	struct book book1;
	std::string& ref_t = book1.title;
	std::string& ref_n = book1.name;
	int& ref_y = book1.year;

	std::cout << "enter a title of book: ";
	getline(std::cin, ref_t);
	std::cout << "enter a author of book: ";
	getline(std::cin, ref_n);
	std::cout << "enter a year of book: ";
	std::cin >> ref_y;

	std::cout << "\"" << ref_t << "\"" << " by " << ref_n << " (" << ref_y << ")";
}