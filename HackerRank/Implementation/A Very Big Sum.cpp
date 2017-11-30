#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long ans=0,tmp;
    int n;
    cin>>n;
    while(n--)
        {
        cin>>tmp;
        ans+=tmp;
    }cout<<ans;
    return 0;
}