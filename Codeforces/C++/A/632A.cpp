#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long int n ,p,i,pre=1;
	long long int ans=0;
	cin>>n>>p;
	vector<string> pays(n);
	for(i=0;i<n;i++) cin>>pays[i];
	ans=p/2;
	for(i=n-2;i>=0;i--)
	{
		pre*=2;
		if(pays[i]=="halfplus")
		{
			pre++;
		}
		ans+=(p/2)*pre;
	}
	cout<<ans;
	return 0;
}