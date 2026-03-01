#include<iostream>
#include<vector>

std::vector<int> array = { 1,2,3,4,5,6,7 };

int& back()
{
	return array[array.size() - 1];
}

int main()
{
	std::cout << back();
}