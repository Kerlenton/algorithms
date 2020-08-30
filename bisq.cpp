#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef map<string, unsigned int> wlist_t;

int main(void)
{
   wlist_t words;
   string word;

   while (cin)
   {
      cin >> word;
      if (cin.eof())
         break;
      words[word] += 1;
   }

   for (wlist_t::iterator i = words.begin(); i != words.end(); i++)
      cout << i->first << ": " << i->second << endl;

   return 0;
}