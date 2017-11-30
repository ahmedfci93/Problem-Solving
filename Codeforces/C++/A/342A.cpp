#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,j,ans=1;
	int ni[8]={};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>j;
		if(j==7 || j==5)
		{
			ans=-1;
			break;
		}
		ni[j]++;
	}
	if(ni[1]!=n/3 || ni[2]<ni[4] || ni[2]+ni[3]<ni[6] || ni[1]!=ni[2]+ni[3]) ans=-1;
	if(ans==1)
	{
		for(i=0;i<n;i+=3)
		{
			cout<<1<<" ";
			if(ni[2]&&ni[4]) cout<<2<<" "<<4<<endl,ni[2]--,ni[4]--;
			else if (ni[2]&&ni[6]) cout<<2<<" "<<6<<endl,ni[2]--,ni[6]--;
			else if (ni[3]&&ni[6]) cout<<3<<" "<<6<<endl,ni[3]--,ni[6]--;
		}
	}else cout<<ans;
	return 0;
}