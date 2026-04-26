#include<iostream>
#include<vector>

const int max = 100;
bool comp[max][max];
long long cache[max][max];

int count_paths(int m, int n) 
{
    if (m == 1 && n == 1)
        return 1;
    if (m == 0)
        return 0;
    if (n == 0)
        return 0;
    if (comp[m][n])
    {
        return cache[m][n];
    }
    cache[m][n] = count_paths(m - 1, n) + count_paths(m, n - 1);
    comp[m][n] = true;
    return cache[m][n];
}

int main()
{
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            comp[i][j] = false;
        }
    }
    std::cout << count_paths(3, 3);
}