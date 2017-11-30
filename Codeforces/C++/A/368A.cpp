#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,d,i,j,m,ans=0,tmp=0;
	cin>>n>>d;
	int a[100];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		tmp+=a[i];
	}
	sort(a,a+n);
	cin>>m;
	if(n>=m) for(i=0;i<m;i++) ans+=a[i];
	else ans=tmp- ( (m-n)*d );
	cout<<ans;
	return 0;
}