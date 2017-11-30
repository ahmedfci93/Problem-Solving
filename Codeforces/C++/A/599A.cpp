#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long d1,d2,d3,ans;
    cin>>d1>>d2>>d3;
    ans=min(d1+d2+d3,2*(d1+d2));
    ans=min(ans,2*(d1+d3));
    ans=min(ans,2*(d2+d3));
    cout<<ans;
    return 0;
}