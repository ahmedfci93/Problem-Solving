#include <iostream>
using namespace std;
int n,f,r;
long double vol[10000];
bool check(long double v)
{
	int cnt=0;
	for(int i=0;i<n;i++) cnt+=(vol[i]/v);
	if(cnt>=f+1) return 1;
	return 0;
}
long double max_pice()
{
	long double e,s,ret,mid;
	s=0,e=10000*10000*3.14159265358979323846264338327950;
	for(int i=0;i<=100;i++)
	{
		mid=(s+e)/2;
		if(check(mid))
		{
			s=ret=mid;
		}else e=mid;
	}
	return ret;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&f);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&r);
			vol[i]=r*r*3.14159265358979323846264338327950;
		}
		printf("%.4Lf\n",max_pice());
	}
	return 0;
}