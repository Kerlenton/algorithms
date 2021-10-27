#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <utility>
#define ll long long
 
using namespace std;
 
const ll MOD = 1000000000 + 7;

void pref_f(string s)
{
  vector<int> p(s.length());

  p[0] = 0;

  for (int i = 1; i < s.length(); i++)
  {
    int d = i - 1;

    while (p[d] > 0 && s[i] != s[p[d]])
      d = p[d] - 1;

    if (s[i] == s[p[d]])
      p[i] = p[d] + 1;

    else
      p[i] = 0;
  }

  for (int i = 0; i < s.length(); i++)
    cout << p[i] << ' ';

  cout << endl;
}

void z_f(string s)
{
  vector<int> z(s.length());

  z[0] = 0;

  int l = -1;
  int r = -1;
  
  for (int i = 1; i < s.length(); i++)
  {
    if (i <= r)
      z[i] = min(r - i + 1, z[i - l]);

    else
    {
      while (z[i] + i < s.length() && s[z[i] + i] == s[z[i]])
	     z[i]++;
    }

      if (r < i + z[i] - 1)
      {
	r = i + z[i] - 1;
	l = i;
      }
  }

  for (int i = 0; i < s.length(); i++)
    cout << z[i] << ' ';

  cout << endl;
}



int main(void)
{
  //ifstream f("input.txt");
  //ofstream o("output.txt");

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;

  cin >> s;

  z_f(s);
  pref_f(s);
  
  
  return 0;
}
