#include <stdio.h>

int gcd(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        
        return a;
    }
    
    int x1, y1, d;
    
    d = gcd(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a % b) * y1;
    
    return d;
}  

int main(void)
{
  int x, y, g;
  
  int a = 5;
  int m = 7;
  
  g = gcd(m, a, &x, &y);
  
  if (g != 1)
    printf("%s", "no solution");
  
  else
  {
    y = (y % m + m) % m;
    printf("%d", y);
  }
   
  return 0;
}
