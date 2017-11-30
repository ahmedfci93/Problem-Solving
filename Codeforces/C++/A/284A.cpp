#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int gcd(int x,int y)
{
	return y==0 ? x : gcd(y,x%y); 
}

int main()
{	
	int p,ans=0,i;
    cin>>p;
    for (i=1;i<p;i++)
        if (gcd(p-1,i)==1) ans++;
    cout<<ans;
}	