#include<iostream>
#include<vector>



int main()
{
	std::vector<int> array = { 1, 2, 3, 4, 5 };
	array.resize(array.size() - 1);
}