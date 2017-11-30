#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main() {
	int n,m,i,num,l,r;
	int x=0,y=0,d;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num==1)x++;
		else y++;
	}
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&l,&r);
		d=(r-l+1);
		if(d%2==0 && d/2<=x && d/2<=y)
		{
			printf("%d\n",1);
		}else printf("%d\n",0);
	}
	return 0;
}
