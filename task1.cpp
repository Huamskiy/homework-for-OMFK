#include <iostream>
const int a = 1;
const int b = 10;
int c =0;

int main()
{
int i;

  for(i = a; i <= b; i++)
  {
	if (i % 2 == 0)
	c = c + i;
  }
std::cout << c;
}
