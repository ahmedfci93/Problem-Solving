#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main ()
{
    int  i;
    string s;
    int num1=0, num0=0;
    cin >> s ;
    for (i = 0; i<s.length() ; i++)
    {
        if ( s[i] == '0' && num1 <7)
            {   
                num1=0; 
                num0++;
            }
        if ( s[i] == '1' && num0 <7)
            {   
                num0=0; 
                num1++;
            }
         
    }
    
      if ( num1 >=7 || num0 >= 7)
          cout <<"YES";
      else
          cout <<"NO";
    return 0;
}