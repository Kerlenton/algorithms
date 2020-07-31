#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int permutation(int n)
{
	return factorial(n);
}

int arrangements(int n, int k)
{
	return factorial(n) / factorial(n - k);
}

int combination(int n, int k)
{
	return factorial(n) / factorial(k) / factorial(n - k);
}

int main(void)
{
	printf("%d", permutation(5));
	printf("%d", arrangements(4, 2));
	printf("%d", combination(4, 2));

	return 0;
}
