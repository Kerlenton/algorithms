#include <string.h>

void reverse(char string[])
{
	int length = strlen(string);
	int temp, i, j;

	for (i = 0, j = length - 1; i < j; ++i, --j)
	{
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
	}
}
