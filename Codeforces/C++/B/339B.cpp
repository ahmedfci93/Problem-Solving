#include <iostream>
using namespace std;

int main() {
	long long n,m,ans,i;
	long long a[100000];
	cin>>n>>m;
	for(i=0;i<m;i++)
		cin>>a[i];
	ans=a[0]-1;//initial vaule
	for(i=1;i<m;i++)
	{
		if(a[i]<a[i-1])
			ans+= n-a[i-1]+a[i];
		else
			ans+=a[i]-a[i-1];
	}
	cout<<ans;
	return 0;
}