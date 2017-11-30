#include <bits/stdc++.h>
using namespace std;
int t[1000001];
int solve(int i)
{
	int m=1;
	while(i!=1)
	{
		if(i%2)i=3*i+1;
		else i/=2;
		m++;
	}
	return m;
}
int main() {
	int i,j;
	int ans=0;
	memset(t,-1,sizeof(t));
	while(scanf("%d%d",&i,&j)==2)
	{
		ans=0;
		cout<<i<<" "<<j<<" ";
		if(i>j) swap(i,j);
		for(;i<=j;i++)
		{
			if(t[i]==-1)
				t[i]=solve(i);
			ans=max(ans,t[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}