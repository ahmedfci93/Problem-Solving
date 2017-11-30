#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
int sz,sz1;
string s,s1;
int memo[7][7];
int solve(int ind1,int ind2)
{
	if(ind1==sz||ind2==sz1) return 0;
	if(memo[ind1][ind2]!=-1)return memo[ind1][ind2];
	int ret;
	if(s[ind1]==s1[ind2])
	{
		ret=1+solve(ind1+1,ind2+1);
	}else ret=solve(ind1,ind2+1);
	ret=max(ret,solve(ind1+1,ind2));
	return memo[ind1][ind2]=ret;
}
int main() {
	cin>>s>>s1;
	sz=s.size();
	sz1=s1.size();
	memset(memo,-1,sizeof(memo));
	cout<<solve(0,0);
	return 0;
}