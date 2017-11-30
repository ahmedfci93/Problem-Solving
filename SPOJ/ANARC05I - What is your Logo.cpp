#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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


int mat[2000][2000];
int cnt[100];
int main() {
	int x,y,ans,mx;
	string s;
	while(cin>>s && s[0]!='Q')
	{
		mx=ans=0;
		mem(mat,0);
		mem(cnt,0);
		cnt[1]=1;
		mat[999][999]=1;
		x=y=999;
		loopi(s.size()-1)
		{
			switch(s[i])
			{
				case 'U':
					mat[--x][y]++;
				break;
				case 'D':
					mat[++x][y]++;
				break;
				case 'L':
					mat[x][--y]++;
				break;
				case 'R':
					mat[x][++y]++;
				break;
			}
			mx=max(mat[x][y],mx);
			cnt[mat[x][y]]++;
		}
		for(int j=mx;j>1;j--)
		{
			ans+=(cnt[j]-cnt[j+1])*(j-1);
		}
		pf("%d\n",ans);
	}
	return 0;
}