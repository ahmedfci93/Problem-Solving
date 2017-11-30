#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int i , bro=0 , me =0 , c =0,n;
    cin >> n;
    vector<int> v (n);
    for (i=0;i<n;i++)
    {
        cin>>v[i];
        bro += v[i];
    }
    
    sort(v.begin(),v.end(),greater<int>());
    while (me <= bro)
    {
        bro -= v[c];
        me += v[c];
        c++;
    }
    cout << c;
        return 0;
}