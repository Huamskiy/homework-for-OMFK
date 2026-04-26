#include<iostream>

double power(double x, int n) {
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

int main()
{
    std::cout << power(5, 3);
}