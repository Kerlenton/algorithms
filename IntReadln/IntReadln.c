#include "IntReadln.h"

extern void IntReadln(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        auto char c = getchar();
        getchar();
        arr[i] = c - '0';
    }
}
