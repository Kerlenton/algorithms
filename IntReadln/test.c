#include "IntReadln.h"

int main(void)
{
    int n = 4;
    int arr[n];
    IntReadln(arr, n);

    printf("%d", arr[0]);

    return 0;
}
