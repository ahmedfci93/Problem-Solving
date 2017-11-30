#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int len1,len2;
string s2,s1,s;
int c1[26];
int c2[26];
int array();
int autom();
int tree();
int main() {
	int i,aut=0,arr=1,tree=0;
	cin>>s1>>s2;
	memset(c1, 0, sizeof (c1));
	memset(c2, 0, sizeof (c2));
	len1=s1.size();
	len2=s2.size();
	
	for(i=0;i<len1;i++)
		if(s1[i]==s2[aut]) aut++;
	if(aut==len2)
		cout<<"automaton";
	else
	{
		for(i=0;i<len1;i++)
		{
			c1[s1[i]-'a']++;
		}
		for(i=0;i<len2;i++)
		{
			c1[s2[i]-'a']--;
		}
		for(i=0;i<26;i++)
		{
			if(c1[i]!=0)arr=0;
			if(c1[i]<0){tree=1;break;}
			
		}
		if(arr)cout<<"array";
		else if(!tree)cout<<"both";
		else  cout<<"need tree";
	}
	
	return 0;
}