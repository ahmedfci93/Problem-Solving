#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void firsth(string s1,int size);	
void secondh(string s1,int size);
int main() {
	int i;
	string s;
	cin>>i;
	cin.ignore();
	while(i)
	{
		getline(cin,s);
		int len=s.size();
		firsth(s,len/2);
		if(len%2)
			cout<<s[len/2];
		secondh(s,len);
		cout<<endl;
		i--;
	}
	return 0;
}
void firsth(string s1,int size)
{
	int i;
	for(i=size-1;i>=0;--i)
		cout<<s1[i];
}
void secondh(string s1,int size)
{
	int i;
	for(i=size-1;i>=(size/2);--i)
		cout<<s1[i];
}