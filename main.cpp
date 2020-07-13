#include <iostream>
#include <iomanip>
using namespace std;

int isdigit_(int n)
{
	if (n >= 1 && n <= 9)
		return 1;
	return 0;
}

void nspace(int p, int q)
{
	if ((isdigit_(p) && isdigit_(q)) || (isdigit_(p) && !isdigit_(q)))
		cout << "  ";
	if ((!isdigit_(p) && !isdigit_(q)) || (!isdigit_(p) && isdigit_(q)))
		cout << " ";
}

int main(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j;
			nspace(i * j, i * (j+1));
		}
		cout << endl;
	}

	system("PAUSE");
	return 0;
}