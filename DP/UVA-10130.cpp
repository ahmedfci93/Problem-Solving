#include <iostream>
#include <cstring>
#include <algorithm>
#include <stdio.h>
#define pf printf
#define mem(array, value) memset(array, value, sizeof(array))
using namespace std;


int p[1000],w[1000],dp[1001][1001];
int mw,n;
int solve(int i,int wt);//wt(weight)
int main() {
	int t,g,i,ans;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d%d",&p[i],&w[i]);
		scanf("%d",&g);
		for(i=0;i<g;i++)
		{
			scanf("%d",&mw);
			mem(dp,-1);
			ans +=solve(0,0);
		}
		pf("%d\n",ans);
	}
	
	return 0;
}

int solve(int i,int wt)//wt(weight)
{
	if(i==n)
		return 0;
	if(dp[i][wt]!=-1)
	{
		return dp[i][wt];
	}
	int ret=0,ret1;//ret(return)
	if(wt+w[i]<=mw)
	{
		ret=p[i]+solve(i+1,wt+w[i]);
	}
	ret1=solve(i+1,wt);
	return dp[i][wt]=max(ret,ret1);
}