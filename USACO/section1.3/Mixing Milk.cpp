/*
ID: ahmed.i3
PROG: milk
LANG: C                 
*/
#include <stdio.h>

int main() {
	FILE *fin  = fopen ("milk.in", "r");
    FILE *fout = fopen ("milk.out", "w");
    long am,fm,i,j,temp,sum=0,total=0;
	long p[5000],a[5000];
	
	fscanf(fin,"%ld%ld",&am,&fm);
	for(i=0;i<fm;i++)
	{
		fscanf(fin,"%ld%ld",&p[i],&a[i]);
	}
	for(i=0;i<fm;i++)//sort 2 arrays ascending order by price
	{
		for(j=i+1;j<fm;j++)
		{
			if(p[j]<p[i])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;sum<am;i++)
	{
			temp=a[i];
			sum+=temp;
			if(am<sum)
				temp -= sum-am;
			total+=temp*p[i];
	}
	fprintf(fout,"%ld\n",total);
	return 0;
}