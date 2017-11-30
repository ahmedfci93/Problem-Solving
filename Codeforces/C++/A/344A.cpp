#include <iostream>
#include <stdio.h>
#include <algorithm>
#define sf scanf
#define pf printf
using namespace std;
 
int main()
{
    int i,n,t,l,c=1;//t(temp),l(last),c(count)
    sf("%d%d",&n,&l);
    for(i=1;i<n;i++)
    {
    	sf("%d",&t);
    	if(t!=l)
    		c++;
    	l=t;
    }
    pf("%d",c);
return 0;
}