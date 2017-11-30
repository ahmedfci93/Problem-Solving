#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,t,ans=0,j,n;
	int p[20000]={};
	cin>>t;
	for(j=0;j<t;j++)
	{
		cin>>n;
		ans=0;
		for(i=0;i<n;i++)
			cin>>p[i];
		sort(p,p+n);
		for(i=n-3;i>=0;i-=3)
			ans+=p[i];
		cout<<ans<<endl;
	}
	return 0;
}