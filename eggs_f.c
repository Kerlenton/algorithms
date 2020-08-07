#include <stdio.h>

int fact(int n)
{
   if (n == 0) return 1;
   return n * fact(n - 1);
}


int C(int n, int k)
{
   if (n < k) return 0;
   return fact(n) / fact(k) / fact(n - k);
}

int h(int n, int m)
{
    if (n > 0 && m > 0)
        return 1 + h(n-1, m-1) + h(n, m-1);
    else
        return 0;
}

int h2(int n, int m)
{
   int h = 0;
   if (n > 0 && m > 0)
      for(int k = 1; k <= n; k++)
         h += C(m, k); 
   return h; 
}

int main(void)
{
    printf("%d", h2(3,3));
    return 0;
}
