#include <stdio.h>
#include <string>
using namespace std;

char a[1000001];

bool found(int x,int y);

int main()
{
	long t, i ,c=0,x,y,s;
	while(scanf("%s",a)==1)
	{
		c++;
		printf("Case %d:\n",c );
		scanf("%d",&t);
		for (i=0; i < t; ++i)
		{
			scanf("%d%d",&x,&y);
			if(x>y)
			{
				s=x;
				x=y;
				y=s;
			}
			if(found(x,y))
				printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}

bool found(int x,int y)
{
	
	for (x; x!=y; ++x)
	{
		if(a[x]!=a[x+1])
			return false;
	}
	return true;
}