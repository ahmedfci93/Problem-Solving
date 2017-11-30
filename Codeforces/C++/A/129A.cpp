#include <iostream>
using namespace std;

int main() {
	int n,i,a,odd=0,even=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if( (a&1) ==1) odd++;
		else even++;
	}
	if( (odd&1)==0 && even==0) cout<<0;
	else
	{
		( (odd&1)==1) ?cout<<odd:cout<<even;
	}
	return 0;
}