/*
ID: ahmed.i3
PROG: calfflac
LANG: C++                  
*/
#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <fstream>


using namespace std;
 
ofstream fout ("calfflac.out");
ifstream fin ("calfflac.in");
char pandl[20000];
int pos[20000];


int main() {
	int i,j,sz,cnt,max,st,ed;
	string in,s;
	in="";
	while(getline(fin,s))
	{
		in+=s;
		in+='\n';
	}
	i=cnt=max=0;
	sz=in.size();
	while(i<sz)
	{
		if(isalpha(in[i]))
		{
			pandl[cnt]=tolower(in[i]);
			pos[cnt++]=i;
		}
		i++;
	}
	for(i=0;i<cnt;i++)
	{
		for(j=0;i-j>-1&&i+j+1<cnt&&pandl[i-j]==pandl[i+j+1];j++)
		{
			if((j+1)*2>max)max=(j+1)*2,st=i-j,ed=i+j+1;
		}
		for(j=0;i-j-1>-1&&i+j+1<cnt&&pandl[i-j-1]==pandl[i+j+1];j++)
		{
			if((j+1)*2 + 1>max)max=(j+1)*2 + 1,st=i-j-1,ed=i+j+1;
		}
	}
	fout<<max<<endl;
	fout<<in[pos[st]];
	for(i=pos[st]+1;i<=pos[ed];i++)fout<<in[i];
	fout<<endl;
	return 0;
}