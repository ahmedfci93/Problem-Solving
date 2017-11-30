#include <bits/stdc++.h>
using namespace std;
int code[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
void prints(int sz);
string solve(string s,int sz);
int main() {
	string s;
	int sz,i;
	prints(10);
	cout<<"NAME";
	prints(26-4);
	cout<<"SOUNDEX CODE"<<endl;
	while(cin>>s)
	{
		sz=s.size();
		prints(10);
		cout<<s;
		prints(26-sz);
		cout<<solve(s,sz)<<endl;
	}
	prints(20);
	cout<<"END OF OUTPUT"<<endl;
	return 0;
}
void prints(int sz)
{
	int i;
	for(i=1;i<sz;i++)
		cout<<" ";
}
string solve(string s,int sz)
{
	string ans="";
	ans+=s[0];
	int i,sz_i=0;
	for(i=1;i<sz;i++)
	{
		if(code[s[i]-'A'] && (code[s[i]-'A'] != code[s[i-1]-'A']))
		{
			ans+=code[s[i]-'A']+'0';
			sz_i++;
		}
		if(sz_i==3) break;
	}
	while(sz_i!=3)
	{
		ans+='0';
		sz_i++;
	}
	return ans;
}