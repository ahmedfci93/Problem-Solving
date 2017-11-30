#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,i;
	long long ans=0,s=1e9;
	int a;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		ans+=a;
		if(a<s& a%2)
			s=a;
	}
	if(ans%2==0)
		cout<<ans;
	else cout<<ans-s;
	return 0;
}