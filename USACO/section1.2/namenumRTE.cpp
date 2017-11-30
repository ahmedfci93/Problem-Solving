/*
ID: ahmed.i3
PROG: namenum
LANG: C++                  
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>	
using namespace std;
string num;
char sj[12];
int len;
vector <string> f;
void solve(char c,int j);
string sg[]={"ABC","DEF","GHI","JKL","MNO","PRS","TUV","WXY"};
int main() {
	ofstream fout ("namenum.out");
    ifstream fin ("namenum.in");
	vector <string> dict;
	fstream dict_in("dict.txt");
	string temp;
	int size1,exit=1;
	fin>>num;
	len=num.size();
	while(dict_in>>temp)
	{
		if(temp.size()==len)
			dict.push_back(temp);
	}
	solve(num[0],0);
	int size=f.size();
	size1 = dict.size();
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size1;j++)
		{	
			if(f[i]==dict[j])
			{
				fout<<f[i]<<endl;
				exit=0;
				break;
			}
		}	
	}
	if(exit)
		fout<<"NONE"<<endl;
	return 0;
}


void solve (char c, int j)
{
	int index=c-'0'-2,i;
	string s1=sg[index];
	for(i=0;i<3;i++)
	{
		sj[j]=s1[i];
		if(len-1==j)
		{
			f.push_back(sj);
		}
		else if(j!=len)
			solve(num[j+1],j+1);
	}
return;
}