#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,j,ans=0,r;
	char c;
	int col[100]={};
	cin>>n;
	for(i=0;i<n;i++)
	{
		r=0;
		for(j=0;j<n;j++)
		{
			cin>>c;
			if(c=='C')
			{
				r++;
				col[j]++;
			}
		}
		ans+=(r*(r-1))/2;
	}
	for(i=0;i<n;i++)
		ans+=(col[i]*(col[i]-1))/2;
	cout<<ans;
	return 0;
}