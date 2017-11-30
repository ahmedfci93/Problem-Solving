#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
	long long int n,t,i,ans=0,j=0,sum=0;
	long long int a[100000];
	scanf("%I64d %I64d",&n,&t);
	for(i=0;i<n;i++)
	{
		scanf("%I64d",&a[i]);
		sum+=a[i];
		ans++;
		if(sum>t)
		{
			sum-=a[j++];
			ans--;
		}
	}
	cout<<ans;
	return 0;
}