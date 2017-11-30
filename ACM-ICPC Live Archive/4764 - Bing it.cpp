#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back
int in[100001],dp[100001],last[100001],nxt[100001];
int main() {
	int n,i,points;
	while(sf("%d",&n )&& n)
	{
		memset(last,-1,sizeof(last));
		memset(dp,0,sizeof(dp));
		for(i=0;i<n;i++)sf("%d",&in[i]);
		for(i=n-1;i>-1;i--)
		{
			nxt[i]=last[in[i]];
			last[in[i]]=i;
		}
		for(i=n-1;i>-1;i--)
		{
			if(nxt[i]==-1)
				dp[i]=dp[i+1];
			else 
			{
				if(in[i]==999)points=3;
				else points=1;
				dp[i]=max(dp[i+1],dp[nxt[i]]+points);
			}
		}
		pf("%d\n",dp[0]);
	}
	return 0;
}