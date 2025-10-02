#include <iostream>

const char* x = "hello";

int main()
{
  int i = 0;
  while (x[i] != '\0')
  {
	i++;
  }
  std::cout << i;
}
