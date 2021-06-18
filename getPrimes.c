int getPrimes(int x)
{
  int ans = 0;
  
  for (int i = 2; i*i <= x; i++)
    while (x % i == 0)
    {
      x /= i;
      ++ans;
    }
  
  if (x > 1)
    ++ans;
  
  return ans; 
}
