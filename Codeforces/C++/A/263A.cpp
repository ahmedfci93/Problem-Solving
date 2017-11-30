#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath> 
using namespace std;
 
int main()
{
    int x,y,m;
    vector< vector<int> > v (5,vector<int>(5));
    int i , j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>v[i][j];
            if(v[i][j]==1)
                {
                    x=j+1;
                    y=i+1;
                }
 
        }
 
    }
    m=abs(x-3)  + abs(y-3);
    cout << m;
return 0;
}