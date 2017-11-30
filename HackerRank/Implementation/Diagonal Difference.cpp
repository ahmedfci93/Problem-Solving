#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j,d1=0,d2=0,n,tmp,maxj;
    cin>>n;
    maxj=n-1;
    for(i=0;i<n;i++)
 {
        
    for(j=0;j<n;j++)
     {
        cin>>tmp;
        if(i==j)
            d1+=tmp;
        if(maxj==j)
            {
            d2+=tmp;
            maxj--;
        }
    }
    }
    cout<<abs(d1-d2);
    return 0;
}