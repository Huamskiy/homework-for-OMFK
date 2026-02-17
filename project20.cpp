#include<iostream>
#include<cstring>

int main()
{
	struct date {
		int day;
		int month;
		int year;
	};
	struct time {
		int hours;
		int minutes;
	};
	struct event {
		std::string name;
		date date;
		time time;
	};
	struct event meeting = {"Meeting", 24, 12, 2019, 18, 40};

	std::cout << "Event: " << meeting.name << '\n' << "When: " << meeting.date.day << "." << meeting.date.month << "." << meeting.date.year << " at " << meeting.time.hours << ":" << meeting.time.minutes;
}