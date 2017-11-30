#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        int n ;
        cin >>n;
        vector <int> vec(n);
        int i;
        for(i=0;i<n;i++)
            cin >> vec[i];
            sort(vec.begin(),vec.end());
        for (i=0;i<n;i++)
            cout << vec[i] << " ";
        return 0;
}