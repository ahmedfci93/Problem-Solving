#include <iostream>
#include <stdio.h>
#include <string.h>//memset()
#include <algorithm>//max()
using namespace std;

int c[3],dp[5000];
int ncutting(int m);
int main() {
	int i, n;
	memset(dp,-1,sizeof(dp));
	scanf("%d",&n);
	for(i=0;i<3;i++)
		scanf("%d",&c[i]);
	printf("%d",ncutting(n));
	return 0;
}

int ncutting(int m)
{
	if(m==0)
		return 0;
	if(dp[m]!=-1) 
		return dp[m];
	int i;
	dp[m]=-1e9;
	for(i=0;i<3;i++)
		if(m-c[i]>=0)
			dp[m]=max(dp[m],1+ncutting(m-c[i]));
	return dp[m];
}