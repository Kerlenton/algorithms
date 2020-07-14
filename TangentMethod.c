#include <stdio.h>

typedef double (*function)(double x);

double Newtone(function f, function df, double xn, double eps)
{
	double x1 = xn - f(xn) / df(xn);
	double x0 = xn;

	while (abs(x0 - x1) > eps)
	{
		x0 = x1;
		x1 = x1 - f(x1) / df(x1);
	}

	return x1;
}

double F(double x)
{
	return x * x - 2;
}

double dF(double x)
{
	return 2 * x;
}

double d2F(double x)
{
	return 2;
}

int main(int argc, char *argv[])
{
	float x = Newtone(F, dF, 1.4142, 0.0001);
	printf("%f", x);

	system("PAUSE");
	return 0;
}