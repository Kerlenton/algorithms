#include <stdio.h>

typedef enum {false, true} bool;

bool nil(unsigned int n)
{
    return n == 0 ? 1 : 0;
}

void tbinary(unsigned int n)
{
    if (n == 0)
        return;
    if ((n % 2) == 0)
    {
        tbinary(n/2);
        printf("%d", 0);
    }
    else
    {
        tbinary((n-1)/2);
        printf("%d", 1);
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);
    if (nil(n))
        printf("%d", 0);
    else
        tbinary(n);

    return 0;
}
