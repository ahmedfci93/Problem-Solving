#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    vector<int>v(4);
    int i,j,s=0 ;
    vector<int>:: iterator it;
    for(i=0;i<4;i++)
    {
        cin>>v[i];
    
    }
    for(i=0;i<4;i++)
    {
        if( v[i]!=0)
        {
        for(j=i+1;j<4;j++)
    {
        if(v[i]==v[j])
        {
            s++;
            v[j]=0;
        }
    
    }
    }
    }
cout<<s;
return 0;
}