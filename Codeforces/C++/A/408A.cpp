#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int cash[100];
	long long n,i,ans=1e6,j,temp=0,item;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>cash[i];
	for(i=0;i<n;i++)
	{
		temp=0;
		for(j=0;j<cash[i];j++)
		{
			cin>>item;
			temp+=item;
		}
		temp=temp*5+cash[i]*15;
		ans=min(ans,temp);
	}
	cout<<ans;
	return 0;
}