#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long ans=0,k,sz,i,mx=0,w[27];//sz(size),mx(max)
	string s;
	cin>>s>>k;
	for(i=0;i<26;i++)
	{
		cin>>w[i];
		mx=max(mx,w[i]);
	}
	sz=s.size();
	for(i=0;i<sz;i++)
		ans+=(i+1)*(w[s[i]-'a']);
	for(i=sz+1;k!=0;i++,k--)
		ans+=i*mx;
	cout<<ans;
	return 0;
}