#include<iostream>
#include<vector>

void insert(int index, int value, std::vector<int>& array) 
{
	array.resize(array.size()+1);
	for (int i = array.size()-1; i > index; i--)
	{
		array[i] = array[i - 1];
	}
	array[index] = value;
}



int main()
{
	std::vector<int> array = { 1,2,3,4,5,6,7 };
	insert(3, 55, array);
	for (auto const& element : array)
		std::cout << element << ' ';
	
}