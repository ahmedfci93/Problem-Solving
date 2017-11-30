#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main ()
{
    int  i;
    string s;
    int num;
    int count = 0;
    cin >>num;
    cin >> s ;
    for (i = 0; i<num ; i++)
    {
        if ( s[i] == s[i+1])
            count ++;
        
    }
    
      cout << count;
    return 0;
}