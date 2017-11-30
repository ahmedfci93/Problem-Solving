#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
int memo[2000][2000];
string a,b;
int sz1,sz2;
int solve(int ind1,int ind2)
{
	if(ind1==sz1) return sz2-ind2;
	if(ind2==sz2) return sz1-ind1;
	if(memo[ind1][ind2]!=-1)return memo[ind1][ind2];
	if(a[ind1]==b[ind2]) return memo[ind1][ind2]=solve(ind1+1,ind2+1);
	memo[ind1][ind2]=min(1+solve(ind1+1,ind2+1),1+solve(ind1+1,ind2));
	memo[ind1][ind2]=min(memo[ind1][ind2],1+solve(ind1,ind2+1));
	return memo[ind1][ind2];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		memset(memo,-1,sizeof(memo));
		cin>>a>>b;
		sz1=a.size();
		sz2=b.size();
		cout<<solve(0,0)<<endl;
	}
	return 0;
}