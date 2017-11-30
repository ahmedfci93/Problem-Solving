#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n,v,i;
    int vec[3]={0};
    cin>>n;
    for(i=0;i<n*3;i++)
    {
        scanf("%d",&v);
        vec[i%3]+=v;
    }
    if(vec[0] | vec[1] | vec[2])
        cout<<"NO";
    else    cout<<"YES";
    
    return 0;
    
}