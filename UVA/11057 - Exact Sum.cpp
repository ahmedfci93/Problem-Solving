#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back

int n;
int in[10000];

bool solve(int price,int ind)
{
	int mid;
	int s=0,e=n-1;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(in[mid]<price)
		{
			s=mid+1;
		}
		else if(in[mid]>price)
		{
			e=mid-1;
		}else
		{
			if(mid!=ind || (mid+1<n&&in[mid+1]==in[mid]) || (mid-1>-1&&in[mid-1]==in[mid])  )return 1;
			else return 0;
		}
	}
	return 0;
}

int main() {
	int i,j,m,price,b1,b2,d;
	while(sf("%d",&n)!=EOF)
	{
		d=1000001;
		for(i=0;i<n;i++)sf("%d",&in[i]);
		sf("%d",&m);
		sort(in,in+n);
		for(i=0;i<n;i++)
		{
			if(in[i]<m)
			{
				price=m-in[i];
				if(solve(price,i))
				{
					if(abs(price-in[i])<d)d=abs(price-in[i]),b1=in[i],b2=price;
				}
			}else break;
		}
		pf("Peter should buy books whose prices are %d and %d.\n\n",b1,b2);
	}
	return 0;
}