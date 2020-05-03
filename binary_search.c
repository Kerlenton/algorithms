#include <stdint.h>

size_t binsearch(size_t v[], size_t x, size_t size)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;

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
