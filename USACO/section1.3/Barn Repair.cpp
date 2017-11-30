/*
ID: ahmed.i3
PROG: barn1
LANG: C++                  
*/
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {
	ofstream fout ("barn1.out");
    ifstream fin ("barn1.in");
	int m,c,s,i,j=0,occupy;
	int block[200],sn[200];
	fin>>m>>s>>c;
	for(i=0;i<c;i++)
	{
		fin>>sn[i];
	}
	occupy=c;
	sort(sn,sn+c);
	for(i=1;i<c;i++)
		if(sn[i]-sn[i-1] !=1)
			block[j++] = sn[i]-sn[i-1]-1;
			
	sort(block,block+j);
	for(i=0;i<=j-m;i++)	
		occupy +=block[i];
	fout<<occupy<<endl;
	return 0;
}