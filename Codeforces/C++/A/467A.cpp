#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n,p,q,size=0;
    int i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin >> p >> q;
        if(p+2 <= q)
            size ++;
    }
    cout << size;
    
return 0;
}