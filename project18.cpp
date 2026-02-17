#include<iostream>
#include<cstring>

int main()
{
	struct product {
		std::string name;
		int price;
	};
	struct order {
		product order;
		int quantity;
	};

	struct order order1 = {"laptop", 15000, 4};

	std::cout << "order total: " << order1.order.price * order1.quantity << " UAH";
}