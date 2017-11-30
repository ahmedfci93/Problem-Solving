#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int i,j,n,d=0,temp,ans=1000;
	int a[1000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(j+1==i)
			{
				temp=abs(a[j]-a[j+2]);
				j++;//to skip a remove hold
			}else temp=abs(a[j]-a[j+1]);
			if(temp>d)
				d=temp;
		}
		if(ans>d)
			ans=d;
		d=0;
	}
	cout<<ans;
	return 0;
}