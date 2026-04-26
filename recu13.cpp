#include<iostream>
#include<vector>

const int max = 1000;
bool comp[max];

long long fib_memo(int n, std::vector<long long>& cache) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (comp[n])
	{
		return cache[n];
	}
	comp[n] = true;
	cache[n] = fib_memo(n - 1, cache) + fib_memo(n - 2, cache);
	return cache[n];
}

int main()
{
	std::vector<long long> array;
	array.resize(max);

	for (int i = 0; i < max; i++)
	{
		comp[i] = false;
	}

	std::cout << fib_memo(10, array);
}