#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,i=1,t=1,inc=2;
	int ans=1;
	cin>>n;
	while(t+i+inc<=n)
	{
		i+=inc;
		t+=i;
		inc++;
		ans++;
	}
	cout<<ans;
	return 0;
}