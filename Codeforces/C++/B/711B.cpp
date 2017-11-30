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


int mat[500][500];
long long r[500],c[500];
long long d1,d2;
int main() {
	int n,e,row,col;
	long long d,mx=0,mi=1e18;
	sf("%d",&n);
	if(n>1)
	{
		e=n-1;
		loopi(n) loopj(n)
		{
			cin>>mat[i][j];
			if(!mat[i][j])row=i,col=j;
		}
		loopi(n) loopj(n)
		{
			r[i]+=(long)mat[i][j];
			c[i]+=(long)mat[j][i];
		}
		if(row+1<n)
		{
			d=r[row+1]-r[row];
		}else if(row-1>-1)d=r[row-1]-r[row];
		r[row]+=d;
		c[col]+=d;
		loopj(n)
		{
			d1+=(long)mat[j][j];
			if(!mat[j][j])d1+=d;
			if(!mat[j][e])d2+=d;
			d2+=(long)mat[j][e],e--;
		}
		mx=max(d1,d2);
		mi=min(d1,d2);
		loopi(n)
		{
			mx=max(mx,max(r[i],c[i]));
			mi=min(mi,min(r[i],c[i]));
		}
		if(mx==mi&&d>0)cout<<d;
		else cout<<"-1";
	}
	else cout<<1;
	return 0;
}