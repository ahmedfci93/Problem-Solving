#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int i,n,ans=0,x[100],m=1e9,c;//m(min),c(counter)
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		m=min(m,x[i]);
	}
	c=0;
	i=0;
	while(c!=n)
	{
		if(x[i%n]>m)
		{
			x[i%n]-=m;
		}
		if(x[i%n]==m)
			c++;
		else c=0;
		m=min(m,x[i%n]);
		i++;
	}
	for(i=0;i<n;i++)
	{
		ans+=x[i];
	}
	cout<<ans;
	return 0;
}