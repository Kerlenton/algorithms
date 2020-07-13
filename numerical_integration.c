#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

float dist(float v, float a)
{
	float x = 0;
	float y = 0;
	float vx = v * cos(a * M_PI / 180);
	float vy = v * sin(a * M_PI / 180);
	float dt = 0.0001;
	while (y >= 0)
	{
		x += vx * dt;
		y += vy * dt;
		vy -= 9.81 * dt;
	}

	return x;
}

int main()
{
	printf("%f", dist(10, 45));

	system("PAUSE");
	return 0;
}