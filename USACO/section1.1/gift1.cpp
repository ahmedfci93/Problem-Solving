/*
ID: ahmed.i3
PROG: gift1
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <map>
#include <string>
using namespace std;

int main() {
	ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
	map<string,int> friends;
	int n,n1,m,rn,i,j,g;
	long double d,fri;
	string name,sender,a[11];
	fin>>n;
	for(i=0;i<n;i++)
	{
		fin>>name;
		a[i]=name;
		friends[name]=0;
	}
	for(i=0;i<n;i++)
		{
			fin>>sender;
			fin>>m>>rn;
			if(rn != 0)
			{
				//friends[sender]-=m;
				
				d=(double)m/rn;
				fri=d-floor(d);
				g=d-fri;
				friends[sender]+=(fri*rn)- d*rn;
				
				for(j=0;j<rn;j++)
				{
					fin>>name;
					friends[name]+=g;
				}
			}
		}
	for(i=0; i<n; ++i)
		{
			fout << a[i] <<" "<< friends[a[i]]<< '\n';
		}
	return 0;
}
