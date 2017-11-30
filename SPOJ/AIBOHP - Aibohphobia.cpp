#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
int memo[6100][6100];
string str;
int solve(int s,int e)
{
	if(s>=e)return 0;
	if(memo[s][e]!=-1)return memo[s][e];
	if(str[s]==str[e])return memo[s][e]=solve (s+1,e-1);
	return memo[s][e]=min(1+solve(s+1,e),1+solve(s,e-1));
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		memset(memo,-1,sizeof(memo));
		cin>>str;
		cout<<solve(0,str.size()-1)<<endl;
	}
	return 0;
}