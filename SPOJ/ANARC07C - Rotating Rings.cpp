#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <queue>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back

int in[1000][1000];
int tmp[1000][1000];
int num;
queue <int> q,q1;
int dir[4];


bool solve()
{
	int x,y;
	bool ret=1;
	y=q1.front();
	while(q.front()!=q1.front())
	{
		x=q1.front();
		q1.pop();
		q1.push(x);
		if(q1.front()==y)
		{
			break;
		}
	}
	while(!q.empty())
	{
		if(q.front()!=q1.front())ret= 0;
		q1.pop();
		q.pop();
	}
	return ret;
}

int main() {
	int i,j,k=0,cnt;
	bool ans;
	while(sf("%d",&num)&&num)
	{
		ans=true;
		cnt=0;
		k++;
		for(i=0;i<num;i++)
			for(j=0;j<num;j++) sf("%d",&in[i][j]),cnt++,tmp[i][j]=cnt;
		
		if(num%2 && ((num*num)/2)+1!=in[num/2][num/2]) ans=0;
		for(i=0;i<num/2&&ans;i++)
		{
			for(j=i;j<num-i;j++)
				q.push(tmp[i][j]),q1.push(in[i][j]);
			for(j=i+1;j<num-i;j++)
				q.push(tmp[j][num-i-1]),q1.push(in[j][num-i-1]);
			for(j=num-i-2;j>i-1;j--)
				q.push(tmp[num-i-1][j]),q1.push(in[num-i-1][j]);
			for(j=num-i-2;j>i;j--)
				q.push(tmp[j][i]),q1.push(in[j][i]);
			ans=solve();
		}
		if(ans) pf("%d. YES",k);
		else pf("%d. NO",k);
		pf("\n");
	}
	return 0;
}