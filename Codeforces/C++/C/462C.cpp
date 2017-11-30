#include <iostream>
#include <stdio.h>
#include <algorithm>
#define sf scanf
#define pf printf
using namespace std;
 
int main()
{
    int i,n,a[300000];
    long long ans=0,t;//t(temp)
    sf("%d",&n);
  	for(i=0;i<n;i++)
  	{
		 sf("%d",&a[i]);
		 	ans+=a[i];
  	}
  	t=ans;
  	sort(a,a+n);
  	for(i=0;i<n-1;i++)
  	{
  		t-=a[i];
  		ans+=a[i]+t;
  	}
    cout<<ans;
return 0;
}