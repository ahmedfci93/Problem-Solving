#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,ans=0,tmp;
    cin>>n;
    while(n--)
        {
        cin>>tmp;
        ans+=tmp;
    }
    cout<<ans;
    return 0;
}
