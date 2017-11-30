#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n,i;
    cin >>n;
    if(n%2==0 && (n%3==0|| n%5==0 || n%7==0) && n != 10 && n!=14 )
        cout << n/2 << " " << n/2;
    else {
        for ( i=4;i<=n;i++ )
        {
            if(i%2==0 && ((n-i)%3==0|| (n-i)%5==0 || (n-i)%7==0))
               { 
                   cout << i << " " << n-i;
                   i=n;
                }
        }
        }
return 0;
}