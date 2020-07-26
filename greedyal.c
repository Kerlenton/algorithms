#include <stdint.h>
#include <stdio.h>

size_t factorial(size_t x)
{
	if (x == 0) return 1;
	return x * factorial(x - 1);
}

signed int search(signed int n)
{
	signed int x = 1;
	signed int i = x;

	while (n - x >= 0)
	{
		i++;
		x = factorial(i);
		
	}

	return --i;
}

void greedyALG(signed int n)
{
	size_t j;

	while (n != 0)
	{
		j = search(n);
		printf("%u+", factorial(j));
		n = n - factorial(j);
	}

	putchar('\b');
	putchar(' ');
	putchar('\n');
}

int main(void)
{
	greedyALG(5);
	return 0;
}
