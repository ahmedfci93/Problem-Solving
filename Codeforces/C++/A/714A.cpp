#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include<math.h>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back

#define mem(a,b) memset(a,int(b),sizeof(a))

#define rloopi(n) for(int i=int(n)-1;i>-1;i--)
#define rloopj(n) for(int j=int(n)-1;j>-1;j--)
#define loopi(n) for(int i=0;i<int(n);i++)
#define loopi1(n) for(int i=1;i<=int(n);i++)
#define loopj(n) for(int j=0;j<int(n);j++)
#define loopj1(n) for(int j=1;j<=int(n);j++)


int main() {
	long long l1,l2,r1,r2,k,ans=0;
	sf("%I64d%I64d%I64d%I64d%I64d ",&l1,&r1,&l2,&r2,&k);
	if(l2<=r1&&r2>=l1)
	{
		if(k>=max(l1,l2)&&min(r1,r2)>=k)
		{
			ans=(k-max(l1,l2))+(min(r1,r2)-k);
		}else
		{
			ans=min(r1,r2)-max(l1,l2)+1;
		}
	}
	
	pf("%I64d",ans);
	return 0;
}