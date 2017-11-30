#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,ai[1000],minn=1e9,maxn=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ai[i];
    }
    sort(ai,ai+n,greater<int>());//	sort in descending order
    minn=ai[n-1];
    maxn=ai[0];
    while(maxn)
    {
       cout<<n<<endl;
       for(i=0;i<n;i++)
       {
           ai[i]-=minn;
           if(ai[i]==0)
           {
               n=i;
               break;
           }
       }
        minn=ai[i-1];
        maxn=ai[0];
    }
    return 0;
}
