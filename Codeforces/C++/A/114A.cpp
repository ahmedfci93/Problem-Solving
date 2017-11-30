#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll k,l,i,ans=1;
	cin>>k>>l;
	for(i=0;;i++)
	{
		ans*=k;
		if(ans==l)
			break;
		if(ans>l)
		{
			ans=0;
			break;
		}
	}
	if(ans)
		cout<<"YES"<<endl<<i;
	else cout<<"NO";
	return 0;
}