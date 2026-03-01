#include<iostream>
#include<vector>

std::vector<int> array = { 1,2,3,4,5,6,7 };

void clear()
{
	for (auto &x : array)
	{
		x = 0;
		std::cout << x << " ";
	}
}
bool is_empty() 
{
	clear();
	for (auto &x : array)
	{
		if (x != 0)
			return false;
		else
			return true;
	}
}

int main()
{
	std::cout << "| " << is_empty();
}