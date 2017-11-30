/*
ID: ahmed.i3
PROG: numtri
LANG: C++                  
*/
#include <fstream>
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
int dp[1001][1001];

int main() {
    ofstream fout ("numtri.out");
    ifstream fin ("numtri.in");
    int r,i,j,ans=0;
	memset(dp,0,sizeof(dp));
	fin>>r;
	for(i=0;i<r;i++)
		for(j=1;j<=i+1;j++)
			fin>>dp[i][j];
	for(i=1;i<r;i++)
		for(j=1;j<=i+1;j++)
			dp[i][j]+=max(dp[i-1][j],dp[i-1][j-1]);
	for(i=1;i<=r;i++)ans=max(ans,dp[r-1][i]);
	fout<<ans<<endl;
    return 0;
}