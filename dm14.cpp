#include<iostream>
#include<vector>

int main()
{
	std::vector<int> array = { 41, 10, 39, 4, 97, 85, 31 };
	for (int i = array.size(); i > 0; i--)
	{
		for (int g = 0; g < i-1; g++)
		{
			if (array[g] > array[g + 1])
				std::swap(array[g], array[g + 1]);
		}
	}
	for (const auto& x : array) 
	{
		std::cout << x << " ";
	}
}