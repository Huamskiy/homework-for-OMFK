#include<iostream>
#include<vector>


template<typename T>
T recursive_max(std::vector<T>& v, int index, int max)
{
	if (v[index] > max)
	{
		max = v[index];
	}
	if (index == v.size() - 2)
		return max;
	return recursive_max(v, index + 1, max);
}


int main()
{
	std::vector<int> array = { 2, 4, 4, 1, 12, 8, 4, 18, 3, 1 };
	std::cout << recursive_max(array, 0, 0);
	std::cout << "привет";
}