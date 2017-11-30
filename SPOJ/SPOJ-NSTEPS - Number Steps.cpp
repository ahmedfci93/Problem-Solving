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
	int x,y,n;
	sf("%d",&n);
	while(n--)
	{
		sf("%d%d",&x,&y);
		if(x%2&&y%2 && y<=x&& (x-y<=2))pf("%d\n",x+y-1);
		else if(x%2==0&&y%2==0&& y<=x&& (x-y<=2))pf("%d\n",x+y);
		else pf("No Number\n");
	}
	return 0;
}