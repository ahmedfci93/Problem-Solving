#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int dp[2001][2001];
int main() {
	int s,n,i,j,ans=0;
	int size[2000],value[2000];
	scanf("%d%d",&s,&n);
	for(i=0;i<n;i++)scanf("%d%d",&size[i],&value[i]);
	memset(dp,-1,sizeof(dp));
	dp[0][0]=0;
	for(i=0;i<n;i++)
		for(j=0;j<s;j++)
			if(dp[i][j]!=-1)
			{
				dp[i+1][j]=max(dp[i][j],dp[i+1][j]);
				if(j+size[i]<=s)
					dp[i+1][j+size[i]]=dp[i][j]+value[i];
			}
	for(i=0;i<=s;i++)ans=max(ans,dp[n][i]);
	cout<<ans;
	return 0;
}