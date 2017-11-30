#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#define pf printf 
using namespace std;


int main() {
    long long d,j,r,ans=0,tmp,t;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>d;
        ans=0;
        tmp=d;
        for(;tmp!=0;tmp/=10)
        {
            r=tmp%10;
            if(r!=0)
            	if(d%r==0)
                	ans++;
        }
            cout<<ans<<endl;
    }
    return 0;
}
