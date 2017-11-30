#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,p=0,ne=0,z=0,tmp,i;
    cin>>n;
    i=n;
    while(i--)
        {
        cin>>tmp;
        if(tmp>0)
            p++;
        else if(tmp<0)
            ne++;
            else z++;
    }
    cout<<(double)p/n<<endl<<(double)ne/n<<endl<<(double)z/n;
    return 0;
}   