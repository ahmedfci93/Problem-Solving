#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
float vp,vd,t,f,c;
bool check (int min)
{
	float p,d,h;
	p=vp*t;
	d=0;
	for(;p<c;)
	{
		p+=vp;
		d+=vd;
		if(p<=d)
		{
			if(p<d)
			{
				h=(d-p)/(vp-vd);
				p=d=h*vp+p;
			}
			if(p<c)
			{
				min--;
				h=(d/vd)+f;
				p+=vp*h;
				d=0;
			}
		}
	}
	if(0<=min)return 1;
	else return 0;
}
int bij_min()
{
	int s=0,e=1000,mid,ret=0;
	if(vp<vd)
		while(s<=e)
		{
			mid=(s+e)/2;
			if(check(mid))
			{
				ret=mid;
				e=mid-1;
			}else s=mid+1;
		}
	return ret;
}

int main() {
	scanf("%f%f%f%f%f",&vp,&vd,&t,&f,&c);
	cout<<bij_min();
	return 0;
}