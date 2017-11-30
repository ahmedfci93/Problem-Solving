#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j,n,l;
    cin>>l;
    for(n=1;n<=l;n++)
        {
        
        for(i=0;i<l-n;i++)
            cout<<" ";
        for(j=0;j<n;j++)
            cout<<"#";
        cout<<endl;
    }
    return 0;
}
