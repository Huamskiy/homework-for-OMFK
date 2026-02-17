#include<iostream>
#include<cstring>

int main()
{
	struct products {
		std::string name;
		double price;
		int quantity;
	};
	const int x = 3;
	products array[x] = {
		{"abrikosiki", 23.10, 15},
		{"bananchiki", 15.50, 40},
		{"ogurechiki", 50.2, 24}
	};

	int sum = 0;

	for (int i = 0; i < x; i++)
	{
		sum = sum + array[i].price * array[i].quantity;
	}

	std::cout << "total: " << sum;

}