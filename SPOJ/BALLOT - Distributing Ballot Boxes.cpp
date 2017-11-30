#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back

#define rloopi(n) for(int i=int(n)-1;i>-1;i--)
#define rloopj(n) for(int j=int(n)-1;j>-1;j--)
#define loopi(n) for(int i=0;i<int(n);i++)
#define loopi1(n) for(int i=1;i<=int(n);i++)
#define loopj(n) for(int j=0;j<int(n);j++)
#define loopj1(n) for(int j=1;j<=int(n);j++)

int n,b;
int in[500000];
int solve(int s,int e)
{
	int ans=0,mid,cnt;
	while(s<e)
	{
		cnt=0;
		mid=s+(e-s)/2;
		loopi(n)
		{
			cnt+=ceil(double(in[i])/double(mid));
		}
		if(cnt>b)s=mid+1;
		else e=mid;
	}
	return e;
}

int main() {
	while(sf("%d%d",&n,&b)&& n!=-1)
	{
		loopi(n)sf("%d",&in[i]);
		sort(in,in+n);
		pf("%d\n",solve(0,in[n-1]));
	}
	return 0;
}