#include <iostream>
#include <algorithm>
using namespace std;
int width[100000];
int solve(int i,int j);
int main() {
    int n,t,i,j;
    cin>>n>>t;
    for(i=0;i<n;i++)
        cin>>width[i];
    while(t--)
    {
        cin>>i>>j;
        cout<<solve(i,j)<<endl;
    }
    return 0;
}
int solve(int i,int j)
 {
    int ans=1e9;
    for(;i<=j;i++)
        ans=min(ans,width[i]);
     return ans;
}