#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
long long memo[1000000];
int num;
long long solve(int n)
{
	if(!n)return 0;
	long long ret=n;
	if(n<1000000)
	{
		if(memo[n]!=-1)return memo[n];
		if(n/2+n/3+n/4 >n)
		{
			ret=solve(n/2)+solve(n/3)+solve(n/4);
		}
		memo[n]=ret;
	}	
	else ret=solve(n/2)+solve(n/3)+solve(n/4);
	return ret;
}
int main() {
	while(cin>>num)
	{
		memset(memo,-1,sizeof(memo));
		cout<<solve(num)<<endl;
	}
	return 0;
}
