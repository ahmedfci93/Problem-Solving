#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
     int i, cm, cm1 = 0;
     int count = 0;
     cin>>cm;
     vector <int> vec (12);
     for ( i = 0 ; i< 12 ; i++)
         cin >> vec[i];
    sort(vec.begin(),vec.end(),greater<int>());
    while(cm1<cm && count != 12)
    {
        cm1 +=vec[count];
        count++;
    
    }
    if (cm1>=cm)
    cout << count;
    else {cout << -1;}
    
    return 0;
}