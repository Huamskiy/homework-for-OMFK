#include<iostream>
#include<vector>

std::vector<int> array = { 1,2,3,4,5,6,7 };

int& front() 
{
	return array[0];
}

int main()
{
	std::cout << front();
}