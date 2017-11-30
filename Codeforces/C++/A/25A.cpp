#include <iostream>
#include <vector>
#include <ctype.h>
#include <string>

using namespace std;


int main()
{
   int n,i,j;
   int even = 0, odd=0;
   int e, o;
   cin >> n;
   for (i=0 ; i<n ; i++)
   {
       cin>>j;
       if(j%2==0)
       {
           even++;
           e = i + 1;
       }
       else { odd++;
       o = i + 1;
       }
       
   }
   if (even < odd)
       cout << e;
   if ( odd< even)
       cout << o;
   if (!even || !odd)
       cout << 0;
            
    return 0;
}