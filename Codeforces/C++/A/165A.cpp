#include <iostream>
using namespace std;

int main() {
	signed int x[1000],y[1000];
	int n,c1,c2,c3,c4,ans=0,i,j;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(i=0;i<n;i++)
	{
		c1=c2=c3=c4=0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(x[i]>x[j] && y[i]==y[j])c1=1;
				else if(x[i]<x[j] && y[i]==y[j]) c2=1;
				else if(y[i]<y[j] && x[i]==x[j]) c3=1;
				else if(y[i]>y[j] && x[i]==x[j]) c4=1;
			}
		}
		if(c1&&c2&&c3&&c4) ans++;
	}
	cout<<ans;
	return 0;
}