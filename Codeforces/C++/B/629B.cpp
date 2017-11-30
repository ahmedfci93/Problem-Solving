#include <bits/stdc++.h>
using namespace std;

int main() {
	int m[400]={};
	int f[400]={};
	int n,i,a,b,j,ans=0;
	char g;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>g;
		cin>>a>>b;
		if(g=='M')
			for(j=a;j<=b;j++)
				m[j]++;
		else
			for(j=a;j<=b;j++)
				f[j]++;
	}
	ans=0;
	for(i=1;i<=366;i++)
	{
		ans=max(ans,min(f[i],m[i]));
	}
	cout<<ans*2;
	return 0;
}