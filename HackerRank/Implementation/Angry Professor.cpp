#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,k,ans=0,i,tmp;
    cin>>t;
    while(t--)
        {
        cin>>n>>k;
        for(i=0;i<n;i++)
            {
            cin>>tmp;
            if(tmp<=0)
                ans++;
        }
        if(ans>=k)
            cout<<"NO";
            else cout<<"YES";
            ans=0;
        cout<<endl;
    }
    return 0;
}