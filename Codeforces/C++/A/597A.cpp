#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <string>
#include <fstream>
#define ll long long
using namespace std;
ll calc(ll a ,ll b);
ll k;
int main() {
	ll b,a,t,ans=0;//t(temporary)
	cin>>k>>a>>b;
	if(a<=0 && b<=0)
	{
		a*=-1;
		b*=-1;
	}
	else if(a<0 && b>0)
	{
		a*=-1;
		ans+=calc(0,a);
		a=1;
	}
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	ans +=calc(a,b);
	cout<<ans;
	return 0;
}
ll calc(ll a ,ll b)
{
	ll d,lower,upper;
	lower = (a + k - 1) / k; // find lowest divisor (round up)
	upper = b / k;           // find higher divisor (round down)
	d = upper - lower + 1;
	return d;
}