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


int main() {
	ofstream fout ("namenum.out");
    ifstream fin ("namenum.in");
	string num;
	int len;
	int key[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,-1,7,7,8,8,8,9,9,9,-1};
	vector <string> dict;
	fstream dict_in("dict.txt");
	string temp;
	int size1,i,j,exits=0,result=0;
	fin>>num;
	len=num.size();
	while(dict_in>>temp)
	{
		if(temp.size()==len)
			dict.push_back(temp);
	}
	size1 = dict.size();
	for(i=0;i<size1;i++)
	{
		exits =1;	
		for(j=0;j<len;j++)
		{	
			int k=dict[i][j]-'A';
			if(key[k]!=num[j]-'0')
			{
				exits=0;
				break;
			}
		}
		if(exits)
		{
			fout<<dict[i]<<endl;
			result=1;
		}
	}
	if(!result)
		fout<<"NONE"<<endl;
	return 0;
}