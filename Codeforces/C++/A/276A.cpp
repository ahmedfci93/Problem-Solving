#include <iostream>
using namespace std;

int main() {
	int i,n,k,fi,ti,temp,ans=-1000000000;
	cin>>n>>k;
	for(i=0;i<n;++i)
	{
		cin>>fi>>ti;
		temp=fi;
		if(ti>k)
		{
			temp=fi-(ti-k);
		}
		if(ans<temp)
			ans=temp;
	}
	cout<<ans;
	return 0;
}