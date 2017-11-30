#include <iostream>
#include <algorithm>
using namespace std;
int maxXor(int l, int r) {
    int ans=0,i,j;
    for(i=l;i<=r;i++)
        {
        for(j=i;j<=r;j++)
            ans=max(ans,(i^j));
    }
    return ans;

}

int main() {
    int res;
    int l;
    cin >> l;
    
    int r;
    cin >> r;
    
    res = maxXor(l, r);
    cout << res;
    
    return 0;
}