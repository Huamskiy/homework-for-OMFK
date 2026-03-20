#include<iostream>
#include<vector>

int main()
{
	std::vector<int> array = { 1, 2, 3, 4, 5, 6, 7 };
	int last = array.size() - 1;

	for (int i = 0; i < array.size() / 2; i++)
	{
		std::swap(array[i], array[last]);
		last = last - 1;
	}
	for (const auto& value : array) 
	{
		std::cout << value << " ";
	}
}