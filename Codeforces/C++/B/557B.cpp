#include <iostream>
#include <stdio.h>
#include <algorithm>
#define sf scanf
#define pf printf
using namespace std;

int main() {
	 float mg,mb,ans;//mb(min boy),mg(min girl)
	 float a[200000],w;
	 int n,i;
	 sf("%d%f",&n,&w);
	 for(i=0;i<2*n;i++)
	 	sf("%f",&a[i]);
	 sort(a,a+2*n);
	 mg=a[0],mb=a[n];
	 ans=min(mg,(float)(mb/2.0));
	 ans=ans*3*n;
	 if(ans>=w)
	 	ans =(float)w;
	 pf("%.9f",ans);
	return 0;
}