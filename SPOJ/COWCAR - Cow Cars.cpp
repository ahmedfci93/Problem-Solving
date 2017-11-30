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


int main() {
	int n,m,d,l,j,ans=0;
	int s[500000];
	sf("%d%d%d%d",&n,&m,&d,&l);
	loopi(n)sf("%d",&s[i]);
	sort(s,s+n);
	loopi(n)
	{
		if(s[i]>=l)
		{
			if(s[i]-(d* (ans/m))>=l)
				ans++;
		}
	}
	pf("%d",ans);
	return 0;
}