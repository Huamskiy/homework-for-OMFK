#include<iostream>
#include<string>

void print_binary(std::string x, int n) {
  
    if (n == 0)
    {
        std::cout << x;
        return;
    }
    if (n % 2 == 1)
        x = "1" + x;
    else
        x = "0" + x;
    return print_binary(x, n / 2);
}

int main()
{
    print_binary(" ", 49);
}