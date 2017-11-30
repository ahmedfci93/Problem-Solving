#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include<math.h>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back

#define mem(a,b) memset(a,int(b),sizeof(a))

#define rloopi(n) for(int i=int(n)-1;i>-1;i--)
#define rloopj(n) for(int j=int(n)-1;j>-1;j--)
#define loopi(n) for(int i=0;i<int(n);i++)
#define loopi1(n) for(int i=1;i<=int(n);i++)
#define loopj(n) for(int j=0;j<int(n);j++)
#define loopj1(n) for(int j=1;j<=int(n);j++)
int n,m=1000000007;
long long solve(long long pow)
{
	if(pow==1)return 2;
	long long ret=solve(pow/2);
	ret*=ret;
	if(pow%2)ret*=2;
	return ret%m;
}

int main() {
	int t;
	sf("%d",&t);
	while(t--)
	{
		sf("%d",&n);
		if(n==1)pf("1\n");
		else
		pf("%lld\n",solve(n-1));
	}
	return 0;
}