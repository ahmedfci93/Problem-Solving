#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
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


int n,c;
int in[100000];
int solve(int s,int e)
{
	int ans=0,mid,required,cur;
	while(s<e)
	{
		mid=s+(e-s)/2;
		required=1,cur=in[0];
		loopi1(n-1)
		{
			if(cur+mid<=in[i])
			{
				required++;
				cur=in[i];
			}
		}
		if(required==c)ans=max(ans,mid);
		if(required<c)e=mid;
		else s=mid+1;
	}
	return (ans==0)?mid:ans;
}
int main() {
	int t;
	sf("%d",&t);
	while(t--)
	{
		sf("%d%d",&n,&c);
		loopi(n)sf("%d",&in[i]);
		sort(in,in+n);
		pf("%d\n",solve(in[0],in[n-1]));
	}
	return 0;
}