#include<iostream>

int digit_count(int n) {
    if (n < 10)
        return 1;
    return 1 + digit_count(n / 10);
}

int main()
{
    std::cout << digit_count(12231);
}