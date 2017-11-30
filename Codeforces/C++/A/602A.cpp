#include <iostream>
using namespace std;
int bx[40];
long long solve(long long b,long long n)
{

	long long i,p,ans=0;
	p=1;
	ans+=bx[n-1];
	for(i=n-2;i>=0;i--)
	{
		p*=b;
		ans+=bx[i]*(p);
	}
	return ans;
}
int main() {
	long long n,i,b,m,x,y;
	cin>>n>>b;
	for(i=0;i<n;i++)
	{
		cin>>bx[i];
	}
	x=solve(b,n);
	cin>>m>>b;
	for(i=0;i<m;i++)
	{
		cin>>bx[i];
	}
	y=solve(b,m);
	if(y==x)
		cout<<"=";
	else if(y<x) cout<<">";
	else cout<<"<";
	return 0;
}