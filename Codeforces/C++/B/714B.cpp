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


int main() {
	int n,pick,target,ans=1,t;
	set<int> in;
	int el [100000];
	sf("%d",&n);
	loopi(n)
	{
		sf("%d",&t);
		in.insert(t);
	}
	if(in.size()>2)
	{
		int x=0;
		while(in.size())
		{
			t=*in.begin();
			in.erase(in.begin());
			el[x]=t;
			x++;
		}
		t=el[x/2];
		pick=t-el[0];
		loopi(x)
		{
			if(pick+el[i]!=t&& el[i]-pick!=t && t!=el[i])
			{
				ans=0;
				break;
			}
		}
	}
	if(ans)pf("YES");
	else pf("NO");
	return 0;
}