#include <stdio.h>
#include <cmath>
float f(float x)
{
	return x*x - 2;
}

float n(float x1, float x2)
{
	float x = (x1 + x2) / 2;
	while (abs(f(x)) > 0.001)
	{
		if (f(x) > 0)
			x2 = x;
		else
			x1 = x;
		x = (x1 + x2) / 2;
	}

	return x;
}

int main(void)
{
	printf("%f", n(0, 100));

	system("PAUSE");
	return 0;
}