/*
ID: ahmed.i3
PROG: dualpal
LANG: C++                  
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;
int solve (int i ,int b);
int ispal (string s);
int main() {
	FILE *fout = fopen ("dualpal.out", "w");
	FILE *fin  = fopen ("dualpal.in", "r");
	int n,s,j,c=0,f=0,i;
	fscanf(fin,"%d%d",&n,&s);
	for(j=s;c!=n;j++)
	{
		for(i=2;i<=10&&f!=2;i++)
		{
			if(solve(j+1,i))
			{
				f++;
			}
		}
		if(f==2)
		{
			fprintf (fout, "%d\n", j+1);
				c++;
		}
		f=0;
	}
	
	return 0;
}

int solve (int i,int b)
{
	int d,r,c=0,j;
	char ch;
	string s;
		while(i)
		{
			d=i/b;
			r=i%b;
			if(r>9)
				ch='A'+r-10;
			else ch='0'+r;
			s+=ch;
			i=d;
		}
	if(ispal(s))
	{
		return 1;
	}
	else return 0;
}
int ispal (string s)
{
	string s1=s;
	int size=s.size();
	reverse(s.begin(),s.end());
	if(s[0]=='0' || s[size-1]=='0')
        return 0;
	if(s==s1)
		return 1;
	return 0;
}