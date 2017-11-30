#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int commen (int x , int y);

int main()
{
    int a,b,n;
    int gcd,i= 0;
    cin >>a>>b>>n;
    
    while(n>=0)
    {
        if(i == 0)
            {
                n = n - commen(a,n); 
                i = 1;
            }
        else
            {
                n = n- commen(b,n); 
                i = 0 ;
            }
        
    }
    
    if ( i == 0) 
        {cout << 0;}
        else 
        {cout << 1;}
        return 0;
}


int commen(int x , int y)
{
    int j,f = 1;
    if ( x != 1 || y!=1)
    {  
    for (j = 1 ; j<=x && j <= y  ;j++)
    {
        if (x%j == 0 &&  y%j == 0)
                {
                    f = j;
                    
                }
   }
   }
return f;
}