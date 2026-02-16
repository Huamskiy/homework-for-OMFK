#include<iostream>

int main()
{
	struct time {
		int hours;
		int minutes;
		int seconds;
	};
	struct time time1;
	
	int& refh = time1.hours;
	int& refm = time1.minutes;
	int& refs = time1.seconds;

	std::cout << "enter a hours, minutes and seconds: ";
	std::cin >> refh >> refm >> refs;

	std::cout << "total seconds: " << refs + refm * 60 + refh * 60 * 60;
}