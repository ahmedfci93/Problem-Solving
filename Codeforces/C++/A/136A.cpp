#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    int i,j,s=0 ;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>j;
        v[j-1]=i+1;
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<< " ";
    }
return 0;
}