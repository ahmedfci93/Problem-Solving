#include <iostream>
#include <string.h>//memset()
using namespace std;

int main() {
	int i,n,a[300],p,x,f=1;//f(found)
	memset(a,-1,sizeof(a));
	cin>>p>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(a[x%p]!=-1)
		{
			cout<<i+1;
			f=0;
			break;
		}
		else
			a[x%p]=1;
	}
	if(f)
		cout<<-1;
	return 0;
}