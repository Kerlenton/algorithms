#include <stdio.h>


float pi()
{
	float p = 0;
	float z = 1;
	for (int i = 1; i < 1000000; i += 2)
	{
		p += z * 4 / i;
		z *= -1;
	}

	return p;
}

int main(void)
{
	printf("%f", pi());

	system("PAUSE");
	return 0;
}