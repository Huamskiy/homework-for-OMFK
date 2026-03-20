#include<iostream>
#include<vector>

int main()
{
	std::vector<int> array = { 1, 1, 2, 2, 2, 3, 1 };
	int i = 0;
	while (i < array.size()-1)
	{
		if (array[i] == array[i + 1])
		{
			for (int g = i; g < array.size() - 1; g++)
			{
				array[g] = array[g + 1];
			}
			array.resize(array.size() - 1);
		}
		else
			i++;
	}

	for (const auto& value : array) 
	{
		std::cout << value << " ";
	}
}