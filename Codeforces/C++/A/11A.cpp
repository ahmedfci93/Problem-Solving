#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,d,ans=0,j,i,pre,nex;
	cin>>n>>d>>pre;
	for(i=1;i<n;i++)
	{
		cin>>nex;
		if(nex<=pre)
		{
			j=((pre-nex)/d)+1;
			nex+=d*j;
			ans+=j;
		}
		pre=nex;
	}
	
	cout<<ans;
	return 0;
}