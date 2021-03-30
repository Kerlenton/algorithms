#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cout << (pow((1 + sqrt(5)) / 2, i) - 
                pow((1 - sqrt(5)) / 2, i)) /
                sqrt(5) << ' ';
    }
}
