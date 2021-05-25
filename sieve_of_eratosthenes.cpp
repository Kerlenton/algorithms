#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    int n;
    
    map<int, bool> prime;
    map<int, bool>::iterator itr;
    
    cin >> n;
    
    for (int i = 2; i <= n; i++)
        prime[i] = true;
    
    for (int i = 2; i <= n; i++)
        if (prime[i] == true)
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
    
    for (itr = prime.begin(); itr != prime.end(); itr++)
        if (itr->second)
            cout << itr->first << endl;
    
    return 0;    
}
