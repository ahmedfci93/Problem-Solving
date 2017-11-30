#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main ()
{
    int  i;
    string s;
    bool test = false;
    cin >> s ;
    for (i = 0; i<s.length() ; i++)
    {
        if ( s[i] == 'H' || s[i] == 'Q'|| s[i] == '9' )
            {   
                test = true;
            } 
    }
    
      if ( test)
          cout <<"YES";
      else
          cout <<"NO";
    return 0;
}