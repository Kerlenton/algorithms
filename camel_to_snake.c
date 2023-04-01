#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    int firstChar = 1;

    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            if (!firstChar) 
                putchar('_');
            
            putchar(tolower(ch));
        } 

        else
            putchar(ch);

        firstChar = 0;
    }
}
