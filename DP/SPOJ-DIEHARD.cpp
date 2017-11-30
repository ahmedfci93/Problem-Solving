#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#define sf scanf
#define pf printf
#define mem(array,value) memset(array,value,sizeof(array))
using namespace std;
int fh=-20,fa=5,ah=3,aa=2,wh=-5,wa=-10;//f(fire),a(air) a(amour),w(water),h(health)
int lv;//last visit
int dp[1004][1006];
int solve(int h,int a);
int main() {
	int t,h,a;
	sf("%d",&t);
	while(t--)
	{
		sf("%d%d",&h,&a);
		mem(dp,-1);
		lv=1;
		pf("%d\n",solve(h+ah,a+aa));
	}
	return 0;
}
int solve(int h,int a)
{
	if(h<=0||a<=0)
		return 0;
		if(dp[h][a]!=-1)
			return dp[h][a];
	int ret=0,ret1=0,ret2=0;//ret(return)
	if(lv!=1)
		{
			lv=1;
			ret=1+solve(h+ah,a+aa);
		}
	if(lv!=2)
		{
			lv=2;
			ret1=1+solve(h+wh,a+wa);
		}
	if(lv!=3)
		{
			lv=3;
			ret2=1+solve(h+fh,a+fa);
		}
	int maxr=max(ret,ret1);//maxr(max return)
	return dp[h][a]=max(maxr,ret2);
}