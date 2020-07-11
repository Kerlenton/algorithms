#include "trig.h"

static int factorial(int x)
{
	if (x == 0) return 1;
	return x * (x - 1);
}

static double power(double  x, unsigned int y)
{
	if (y == 0) return 1;
	return x * power(x, y - 1);
}

extern double cos(double x)
{
	double cos = 0;
	signed int j = 1;
	for (int i = 0; i < 100; i += 2)
	{
		if (j == 1)
			cos += power(x, i) / factorial(i);
		else
			cos -= power(x, i) / factorial(i);

		j *= -1;
	}

	return cos;
}

extern double sin(double x)
{
	double sin = x;
	signed int j = 1;
	for (int i = 3; i < 100; i += 2)
	{
		if (j == -1)
			sin += power(x, i) / factorial(i);
		else
			sin -= power(x, i) / factorial(i);

		j *= -1;
	}

	return sin;
}
