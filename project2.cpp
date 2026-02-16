#include<iostream>
#include<cstring>

int main()
{
	struct product {
		std::string name;
		double price;
		int quantity;
	};
	struct product product1;


	std::string& refn = product1.name;
	double& refp = product1.price;
	int& refq = product1.quantity;


	std::cout << "enter name, price and quantity: ";
	std::cin >> refn >> refp >> refq;

	std::cout << "total: " << refp * refq;

}