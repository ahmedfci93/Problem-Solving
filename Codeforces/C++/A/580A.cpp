#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,maxl=0,c=1,i;
	long a[100000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=1;i<n;i++)
	{
		if(a[i-1]<=a[i])
			c++;
		else maxl=max(maxl,c);
	}
	maxl=max(maxl,c);
	cout<<maxl;
	return 0;
}