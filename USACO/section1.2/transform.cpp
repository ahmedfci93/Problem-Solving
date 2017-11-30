/*
ID: ahmed.i3
PROG: transform
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;
string p[11];
string m[11]={"0"};
string t1[11];
string t[11];
string origin[11];
int f90(string n [11],int size)
{
	int x,y,counter=0;
	char h[11][11];
	for(x=0;x<size;x++)
	{
		for(y=0;y<size;y++)
		{
			h[x][y]=n[size-1-y][x];
			
			if(h[x][y]==t[x][y])
			{
				counter++;
			}
		}
	}
	for(x=0;x<size;x++)
	{
		for(y=0;y<size;y++)
		{
			t1[x][y]=h[x][y];
		}
	}
if(size*size==counter)
	return 1;
	else return 0;

}
int ref(int size)
{
	int i,j,counter=0;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			p[i][j]=origin[i][size-1-j];
			
			if(p[i][j]==t[i][j])
			{
				counter++;
			}
		}
	}
if(size*size==counter)
	return 1;
	else return 0;

}



int main() {
	ofstream fout ("transform.out");
    ifstream fin ("transform.in");
	int size,i,j,l=1,c=0,cc=0,r,f=0,ff=1;
	string s;
	fin>>size;
	for(i=0;i<size;i++)
	{
			fin>>s;
			t1[i]=s;
			origin[i]=s;
			p[i]=s;
	}
	for(i=0;i<size;i++)
	{
		fin>>s;
		t[i]=s;
		for(j=0;j<size;j++)
		{
			if(t[i][j] == origin[i][j])
			{
				cc++;
			}
		}
	}
	for(i=0;i<3&& f<1;i++)
	{
		f=f90(t1,size);
		c++;
	}
	if(f==1)
		{
			fout<< c <<endl;
			l=c=0;
			ff=0;
			cc=0;
		}
	else if(f==0&& ref(size))
		{
			fout<< 4 <<endl;
			c=0;
			ff=0;
			cc=0;
		}
	else if(f==0)
	{	
		f=f90(p,size);
		for(i=0;i<2 && f<1;i++)
		{	
			f=f90(t1,size);
			c++;
		}
		
	}
	if(f==1 &&l)
	fout<<5<<endl;
	else if(cc==size*size)
	{
		fout<<6<<endl;
	}
	else if(ff)
	fout<<7<<endl;
	
	return 0;
}