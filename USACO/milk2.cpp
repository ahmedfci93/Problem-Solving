/*
ID: ahmed.i3
PROG: milk2
LANG: C++                  
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
	long long i,n,a[2][5001],s,e,lmmax=0,lnmax=0,nmax,mmax,j,temp;
	cin>>n;
	for(i=0;i<n;i++)
		{
			fin>>a[0][i]>>a[1][i];
		}
		for(i=0;i<n;i++)
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