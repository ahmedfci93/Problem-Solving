#include <iostream>
#include <stdio.h>
#include <algorithm>
#define sf scanf
#define pf printf
using namespace std;
 
int main()
{
    int i,t,c[10]={0};//t(temp),c(counters)
    string ans;
  	for(i=0;i<6;i++)
  	{
		 sf("%d",&t);
		 c[t]++;
  	}
  	sort(c,c+10,greater<int>());//arrange counters in descending order
  	if(c[0]>=4)
  	{
  		if(c[1]==1)
  			ans="Bear";
  		else ans="Elephant";
  	}
  	else ans="Alien";
    cout<<ans;
return 0;
}