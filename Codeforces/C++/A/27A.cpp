#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,i;
	int a[3000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	if(a[0]>1)
		return cout<<1,0;
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i]>1)
			return cout<<a[i]+1,0;
	}
	return cout<<a[n-1]+1,0;
}