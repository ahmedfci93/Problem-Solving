#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	long long count,n,b,b1,d,i;
	cin>>n;
	cin>>b;
	count=abs(b);
	for(i=1;i<n;i++)
	{
		cin>>b1;
		d=b1-b;
		if(d>0 )
		{
			count+=d;
			
		}else
		{
			count+=abs(d);
		}
		b=b1;
	}
	cout<<count;
	return 0;
}