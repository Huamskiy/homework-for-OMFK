#include<iostream>
#include<vector>

int find(int value, std::vector<int>& array) 
{
	for (int i = 0; i < array.size(); i++)
	{
		if (array[i] == value)
			return i;
	}
	return -1;
}



int main()
{
	std::vector<int> array = { 1,24,31,4,5,16,79 };
	std::cout << find(5, array);
}