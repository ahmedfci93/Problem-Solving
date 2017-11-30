#include <iostream>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main() {
	int n,m=1000,i,d,j,x,y;
	int a[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		
			d=abs(a[i]-a[(i+1)%n]);
			if(m>d)
			{
				m=d;
				x=i;
				y=(i+1)%n;
			}
	}
	cout<<x+1<<" "<<y+1;
	return 0;
}
