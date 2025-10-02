#include <iostream>

const int a = 124125;
int b;			// stores the remainder
int c = a;		// to work with "a"
int i;			// to work with array "x"
int g;			// to work with array "y"

int main()
{
  char x[20];		// 20 characters for the use case of unsigned long long
  char y[20];		// char x to store the reciprocal of a number
  while (c > 0)		// char y to store a done number
  {
	b = c % 10;
	c = c / 10;
	x[i] = '0'+b;
	i++;
  }
  int p = i;		// so that g is compared to an unchanging number
  for (g = 0; g < p; g++)
  {
	y[g] = x[i-1];
	i--;
  }
  y[g] = '\0';		// to avoid printing the entire array

  std::cout << y;
}
