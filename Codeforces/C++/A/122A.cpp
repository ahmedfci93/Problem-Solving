#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n,x,z,y;
    cin>>n;
    x=n-(n/10)*10;
    y=n/10-(n/100)*10;
    z=n/100;
    if((x==4 || x==7)&&( y==4 || y==7) &&( z==4 || z==7||z==0))
    {
        cout<<"YES";
    }
    else if(n%4==0||n%7==0|n%47==0|n%744==0)
        cout<<"YES";
        else cout<<"NO";
return 0;
}