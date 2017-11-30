/*
ID: ahmed.i3
PROG: palsquare
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <algorithm> 
#include <string>
using namespace std;
ofstream fout ("palsquare.out");
ifstream fin ("palsquare.in");
char base [21]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','K','L'};
void solve(int i,int ba);
string convert(int sq,int ba);
int main() {
	int b,i;
	fin>>b;
	for(i=1;i<=300;i++)
		solve(i,b);
	return 0;
}
void solve(int i,int ba)
{
	
	string ans,s1;
	ans=convert(i*i,ba);
	string s=ans;
	reverse(ans.begin(),ans.end());
	if(ans == s )
	{
		s1=convert(i,ba);
		reverse(s1.begin(),s1.end());
		fout<<s1<<" " <<ans<<endl;
	}
}
string convert(int sq,int ba)
{
	int j,d=1,r,m;
	string ans;
	for(j=0;d;j++)
		{
			d=sq/ba;
			m=ba*d;
			r=sq-m;
			ans+=base[r];
			sq=d;
		}
	return ans;

}