#include <stdio.h>

int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (x < v[mid])
			high = mid - 1;

		else if (x > v[mid])
			low = mid + 1;

		else
			return mid;
	}

	return -1;
}

main()
{
	int v[100], x, n, i;

	printf("Enter number of elements -> ");
	scanf_s("%d", &n);

	printf("Enter %d variables:\n", n);

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &v[i]);
	}

	printf("Enter value to find -> ");
	scanf_s("%d", &x);

	printf("Value %d is located at index of %d\n", x, binsearch(x, v, n));

	system("PAUSE");
	return 0;
}