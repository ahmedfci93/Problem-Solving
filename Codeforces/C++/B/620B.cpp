#include <iostream>
#include <stdlib.h>
using namespace std;
int seg[10]={6,2,5,5,4,5,6,3,7,6};
int main() {
	int a,b,i,temp,ans=0;
	cin>>a>>b;
	for(i=a;i<=b;++i)
	{
		if(i<10)
			ans+=seg[i];
		else
		{
			temp=i;	
			while(temp)
			{
				ans+=seg[temp%10];
				temp/=10;
			}
		}
	}
	cout<<ans;
	return 0;
}