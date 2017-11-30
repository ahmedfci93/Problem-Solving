#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath> 
using namespace std;
 
int main()
{
    int x=0,i,n,j=1,k=1;
    int h=1,l,s;
    cin>>n;
    s=100;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        if(h<l)
        {
            h=l;
            j=i;
        }
        if(s>=l)
        {
            s=l;
            k=i;
        }
    
    }
    
    if(j>k)
        cout << j-1+n-k-1;
        else cout << j-1+n-k;
return 0;
}