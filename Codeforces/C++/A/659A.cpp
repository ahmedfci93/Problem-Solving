#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,n,ans;
	cin>>n>>a>>b;
	ans=((a+b)%n);
	if(ans<=0)ans+=n;
	cout<<ans;
	return 0;
}