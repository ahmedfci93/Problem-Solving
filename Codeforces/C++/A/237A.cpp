#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


int main()
{
   int h,m,hl,ml,i;
   int n,c=1 , ct=1;
   cin>>n;
   for  (i = 0; i<n ; i ++)
   {
       cin >> h >> m;
       if(h == hl && m == ml)
       {
           c++;
       }else { c= 1;}
       if (c > ct )
       {    
           ct =c;
       }
       hl=h;
       ml=m;
   }  
     cout << ct <<endl;
            
    return 0;
}