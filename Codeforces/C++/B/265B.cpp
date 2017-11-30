#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	long n,hi[100000],i,ans=0;
	cin>>n;
	ans=n;//time of eating nuts
	for(i=0;i<n;i++)
	{
		cin>>hi[i];
	}
	ans+=hi[0];//first walk up
	for(i=0;i<n-1;i++)
	{
		if(hi[i]==hi[i+1])
			ans++;//jump
		else ans+=abs(hi[i]-hi[i+1])+1;//difference between two trees then 1(jump)
	}
	cout<<ans;
	return 0;
}