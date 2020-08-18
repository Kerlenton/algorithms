#include <stdio.h>
#include <string.h>

void swap(char *c1, char *c2)
{
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

void P(char *array, int i, int num)
{
    int j;
    if (i == num)
        printf("%s\n", array);
    else
    {
        for(j = i; j <= num; j++)
        {
            swap((array + i), (array + j));
            P(array, i + 1, num);
            swap((array + i), (array + j));
        }
    }
}

int main(void)
{
    char array[] = "ABC";
    P(array, 0, strlen(array) - 1);
    return 0;
}
