#include <iostream>

int x[6];	// array for store a value of ticket
int ticket = 0;	// number of lucky ticket

int main()
{
  for (int i = 0; i <= 999999; i++)
  {
	int a = i;
	for (int g = 5; g >= 0; g--)
	{
		x[g] = a % 10;		// set values in an array
		a = a / 10;
	}

	int first = x[0] + x[1] + x[2];	// comparing the first and second half of the array
	int second = x[3] + x[4] + x[5];// and finding the lucky tickets

	if (first == second)
	{
		ticket++;
	}
  }
  std::cout << ticket;
}

