#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int list[10];
int memo[10];
int n;
int solve(int ind,int pre)
{
	if(ind==n)return 0;
	if(memo[ind]!=-1)return memo[n];
	int ret=0;
	if(list[ind]>pre) ret=1+solve(ind+1,list[ind]);
	ret=max(ret,solve(ind+1,pre));
	return ret;
}
int main() {
	cin>>n;
	memset(memo,-1,sizeof(memo));
	for(int i=0;i<n;i++)cin>>list[i];
	cout<<solve(0,0)<<endl;
	return 0;
}