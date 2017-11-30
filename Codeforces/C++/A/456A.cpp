#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    int i,n,s=0,j;//s is status
    cin>>n;
    pair<int,int> lap[n];
    for(i=0;i<n;i++)
    {
        cin>>lap[i].first>>lap[i].second;
    }
    sort(lap,lap+n);
    for(i=0;i<n-1&& !s;i++)
        {
            if(lap[i].first<lap[i+1].first)
            {
                if(lap[i].second>lap[i+1].second)
                    s=1;
            }
        }
    if(s) cout<<"Happy Alex";
    else cout<<"Poor Alex";
    return 0;
}