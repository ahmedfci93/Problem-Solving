#include <iostream>
using namespace std;

int main() {
	int n,m,k,i,f,ans=0,d,tmp,j;
	int x[1000];
	cin>>n>>m>>k;
	for(i=0;i<m;i++)
		cin>>x[i];
	cin>>f;
	for(i=0;i<m;i++)
	{
		d=0;
		tmp=x[i]^f;
		for(j=0;j<n;j++)
		{
			if(tmp&1)
			{
				d++;
			}
			tmp>>=1;
		}
		if(d<=k)
			ans++;
	}
	cout<<ans;
	return 0;
}