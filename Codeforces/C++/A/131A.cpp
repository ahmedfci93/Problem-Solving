#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main ()
{
    int  i ;// num of stops
    int length;
    string s, s1;
    int c = 0;
    cin >> s;
    length = 0;
    s1 = s;
    for (i = 0; i<s.length() ; i++)
    {
        if (isupper (s[i]))
            length ++;
        if (!isupper (s[i]) && i!=0)
           {
            c = 1;
           }
        s[i] = tolower (s[i]);

    }
    
    if (length == s.length()-1 )
        s[0]= toupper (s[0]);
  if (c == 1 )
      cout << s1;
  else
      cout << s;
    return 0;
}