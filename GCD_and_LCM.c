#include <stdlib.h>
#include <assert.h>

size_t GCD(size_t a, size_t b)
{
	//assert(a >= 0);
	//assert(b >= 0);
	if (a == 0)
		return b;

	return GCD((b % a), a);
	

	return b;
}

size_t LCM(size_t a, size_t b)
{
	return (a * b) / (GCD(a, b));
}
