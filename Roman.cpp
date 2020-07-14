#include <iostream>
#include <string>
#include <map>
using namespace std;

int fromRoman(char *n)
{
    map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int tmp = 0;
    int res = 0;

    for (char *c = n; *c != '\0'; c++)
    {
        int k = m[*c];

        if (k < tmp)
        {
            res += tmp;
            tmp = k;
        }

        else if (k > tmp)
        {
            if (tmp == 0)
                tmp = k;
            else
            {
                res += k - tmp;;
                tmp = 0;
            }
        }

        else if (tmp == k)
        {
            res += tmp + k;
            tmp = 0;
        }
    }

    return res + tmp;
}

int main(void)
{
    cout << fromRoman("XXI") << endl;

    return 0;
}
