/*
ID: ahmed.i3
PROG: milk2
LANG: C++                  
*/
//1st Solution
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
//============================================================
//2nd Solution
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
	int i,n,a[2][5001],s,e,lmmax=0,lnmax=0,nmax,mmax,j,temp;
	fin>>n;
	for(i=0;i<n;i++)
		{
			fin>>a[0][i]>>a[1][i];
		}
		for(i=0;i<n;i++)//sort 2d array ascending order by row one
		{
			for(j=i+1;j<n;j++)
			{
				if(a[0][i]>a[0][j])
				{
					temp=a[0][i];
					a[0][i]=a[0][j];
					a[0][j]=temp;
					temp=a[1][i];
					a[1][i]=a[1][j];
					a[1][j]=temp;
				}
			}
		}
		
		s=a[0][0];
		e=a[1][0];
		lmmax=e-s;
		for (i=1;i<n;i++)
		{
			if(a[1][i]>e)
			{
			if ( a [0] [i] <=e )
				e=a[1][i];
			else{
				mmax=e-s;
				s=a[0][i];
				nmax=s-e;
				e=a[1][i];
				if(lmmax<mmax)
					lmmax=mmax;
				if(lnmax<nmax)
					lnmax=nmax;
				}
			}
		}
			fout<<lmmax<<" "<< lnmax <<endl;
	return 0;
}