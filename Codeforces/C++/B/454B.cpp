#include <iostream>
#include <stdio.h>
using namespace std;
int a[100000];
int main() {
	int i,n,h1=0,k=0,ans;//h1(first half of array),k(key)
	scanf("%d%d",&n,&a[0]);
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(k==0)
		{
			if(a[i-1]<=a[i])
				h1++;
			else if(a[0]>=a[i]){
				k=ans=1;
			}else {
				ans=-1;
				k=1;
			}
		}else{
			if(a[i-1]<=a[i] && a[i]<=a[0])
				ans++;
			else {
				ans=-1;
				break;
			}
		}
	}
	if(h1==n-1)
		cout<<0;
	else
		cout<<ans;
	return 0;
}