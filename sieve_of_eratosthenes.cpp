#include <assert.h>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

size_t power(size_t x, size_t y)
{
	if (y <= 0) return 1;
	return x * power(x, y - 1);
}

int main(void)
{
	size_t i = 2;
	size_t j, n, k;
	vector<size_t> p;
	vector<size_t>::iterator itr2;
	map<size_t, bool> a;
	map<size_t, bool>::iterator itr;

	scanf_s("%u", &n);
	cout << "---\n" << endl;

	assert(n >= 2);
	assert(n <= power(2, 20));

	for (j = 2; j <= n; j++)
	{
		a[j] = true;
	}

	for (i; i <= n; i++)
	{
		if (a[i] == true)
		{
			for (k = i * i; k <= n; k += i)
			{
				a[k] = false;
			}
		}
	}

	for (itr = a.begin(); itr != a.end(); itr++)
	{
		if (itr->second == true)
		{
			p.push_back(itr->first);
		}
	}

	for (itr2 = p.begin(); itr2 != p.end(); itr2++)
	{
		cout << *itr2 << endl;
	}

	putchar('\n');
	system("PAUSE");
	return 0;
}
