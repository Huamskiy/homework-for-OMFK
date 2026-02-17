#include<iostream>
#include<cstring>

int main()
{
	struct products {
		std::string name;
		double price;
	};

	const int x = 3;

	products array[x] = {
		{"abrikosiki", 23.10},
		{"bananchiki", 15.50},
		{"ogurechiki", 50.2}
	};
	
	double min = array[0].price;
	int value;

	for (int i = 0; i < x; i++)
	{
		if (array[i].price < min)
		{
			value = i;
			min = array[i].price;
		}
	}

	std::cout << "cheapest is: " << array[value].name << " (" << array[value].price << ")";
}