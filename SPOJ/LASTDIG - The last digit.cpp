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
int a,b;
set <int> s;
int main() {
	int t;
	sf("%d",&t);
	while(t--)
	{
		sf("%d%d",&a,&b);
		if(b==0)pf("1\n");
		else if(a==0)pf("0\n");
		else 
		{
			while(b/2!=0)s.insert(b),b/=2;
			int tmp=a;
			while(!s.empty())
			{
				tmp*=tmp;
				if(*s.begin()&1)tmp=tmp*a;
				s.erase(s.begin());
				tmp%=10;
			}
			pf("%d\n",tmp);
		}
	}
	return 0;
}