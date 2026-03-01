#include<iostream>
#include<vector>

void clear() 
{
	std::vector<int> array = { 1,2,3,4,5,6,7 };
	for (auto x : array)
	{
		x = 0;
		std::cout << x;
	}
}

int main()
{
	clear();
}