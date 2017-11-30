#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[1000]={};
	int n,l,i,j;
	int d=0;
	cin>>n>>l;
	for(j=0;j<n;j++)
		cin>>a[j];
	sort(a,a+n);
	d=max((l-a[n-1]),(a[0]-d))*2;
	for(j=0;j<n-1;j++)
	{
		d=max(d,(a[j+1]-a[j]));
	}
	printf("%.10f",d/2.0);
	return 0;
}