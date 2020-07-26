#include <stdio.h>
#include <stdlib.h>

signed int power(signed int  x, signed int y)
{
	if (y <= 0) return 1;
	return x * power(x, y - 1);
}

signed int search1(signed int n, signed int x, signed int y)
{
	while ((n - power(x, y)) > 0)
		y++;

	return --y;
}

signed int search2(signed int n, signed int x, signed int y)
{
	if ((n - power(x, y)) <= 0) return --y;
	return search2(n, x, y + 1);
}

void greedyALG(size_t n)
{
	size_t j, x = 2, y = 0;

	while (n != 0)
	{
		j = search1(n, x, y); // or j = search2(n, x, y)
		printf("%u+", power(x, j));
		n = n - power(x, j);
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
