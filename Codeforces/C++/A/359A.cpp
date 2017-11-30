#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int i,j,n,m;
	int cell;
	int ans=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>cell;
			if( ( (i==0 || i==n-1) || ( j==0 || j==m-1) ) && cell==1)
			{
				ans=1;
			}
		}
	}
	if(ans) cout<<2;
	else cout<<4;
	return 0;
}