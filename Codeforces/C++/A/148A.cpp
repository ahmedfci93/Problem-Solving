#include <iostream>
#include <stdio.h>
#include <algorithm>
#define ll long long
#define sf scanf
#define pf printf
using namespace std;
 
int main()
{
    int i,k,l,n,m,d,ans;
    sf("%d%d%d%d%d",&k,&l,&n,&m,&d);
    ans=d;
    for(i=1;i<=d;i++)
    {
    	if(i%k!=0&&i%l!=0&&i%n!=0&&i%m!=0)//unharmed dragons
    		ans--;
    }
    pf("%d",ans);
return 0;
}