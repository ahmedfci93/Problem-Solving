/*
ID: ahmed.i3
PROG: milk2
LANG: C++                  
*/

#include <fstream>
#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

class interval{
	public: int s,e;
};
int n;
interval in[5000];
bool cmp(interval b,interval a)
{
	if(b.s!=a.s)return b.s<a.s;
	return b.e<a.e;
}
int main() {
	FILE *sf  = fopen ("milk2.in", "r");
    FILE *pf = fopen ("milk2.out", "w");
	int i,j,milking,gap,s,e,sg;
	fscanf(sf,"%d",&n);
	for(i=0;i<n;i++)fscanf(sf,"%d%d",&in[i].s,&in[i].e);
	sort(in,in+n,cmp);
	s=in[0].s,e=in[0].e;
	gap=0;
	milking=e-s;
	for(i=1;i<n;i++)
	{
		if(in[i].s>=s && in[i].s<=e)e=max(e,in[i].e);
		else 
		{
			if(e<in[i].s)gap=max(gap,in[i].s-e);
			milking=max(milking,e-s);
			s=in[i].s,e=in[i].e;
		}
	}
	fprintf(pf,"%d %d\n",milking,gap);
}