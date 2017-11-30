#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	int x1,x2,x3,x4,y1,y2,y3,y4,d,ne=0;//points of x & y,distance between two points,not exist
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	if(y1==y2)
	{
		d=abs(x2-x1);
		y3=y1+d;
		y4=y2+d;
		x3=x1;
		x4=x2;
	}
	else if(x1==x2)
	{
		d=abs(y2-y1);
		y3=y1;
		y4=y2;
		x3=x1+d;
		x4=x2+d;
	}
	else if(abs(x2-x1)==abs(y2-y1))
	{
		x3=x1;
		y3=y2;
		x4=x2;
		y4=y1;
	}else{
		ne=1;
		}
	if(ne) printf("-1");
	else
		printf("%d %d %d %d",x3,y3,x4,y4);
	return 0;
}