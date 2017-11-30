#include <iostream>
using namespace std;

int main() {
	int t=1,n,i,r,l,x,ans=0;
	cin>>n>>x;
	for(i=0;i<n;i++)
	{
		cin>>l>>r;
		ans+=((l-t)%x)+(r-l)+1;
		t=r+1;
	}
	cout<<ans;
	return 0;
}