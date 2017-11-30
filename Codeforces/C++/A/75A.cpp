#include <iostream>
using namespace std;
long long solve(long long n);
int main() {
	long long n,m,res;
	cin>>n>>m;
	res=n+m;
	n=solve(n);
	m=solve(m);
	( solve(res) == m+n ) ? cout<<"YES" : cout<<"NO";
	return 0;
}

long long solve(long long n)
{
	long long temp=1,ret=0;
	while(n)
	{
		if(n%10)
		{
			ret+=temp*(n%10);
			temp*=10;
		}
		n/=10;
	}
	return ret;
}