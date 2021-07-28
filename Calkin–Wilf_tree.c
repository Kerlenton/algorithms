#include <stdio.h>

void tree(int n, int p, int q)
{
  if (n > 0)
  {
    printf("%d/%d\n", p, q);
    tree(n - 1, p, p + q);
    tree(n - 1, p + q, q);
  }
  
  else
    return;
}

int main()
{
  int n, p, q;
  scanf("%d %d %d", &n, &p, &q);
  
  tree(n, p, q);
  
  return 0;
}
