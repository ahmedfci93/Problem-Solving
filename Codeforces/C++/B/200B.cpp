#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int i,n,num;
	double ans=0.0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		ans+=num;
	}
	printf("%.12f\n",ans/n);
	return 0;
}