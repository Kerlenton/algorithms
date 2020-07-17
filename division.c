#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 22;
    int y = 7;

    printf("%d.", x / y);
    x = x % y;
    for (int i = 0; i < 400; i++)
    {
        x = x % y * 10;
        if (x == 0)
            break;
        printf("%d", x / y);
    }
    putchar('\n');
}
