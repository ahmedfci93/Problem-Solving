/*
ID: ahmed.i3
PROG: beads
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int n;
string s;
int rcount(int i);
int lcount(int i);
int main() {
	ofstream fout ("beads.out");
    ifstream fin ("beads.in");
	int i,ans=0,f=0,res,r,l;
	fin>>n;
	fin>>s;
	char c=s[0];
	for(i=0;i<n;i++)
	{
		r=rcount(i);
		l=lcount(i-1);
		if(s[i]==c)
		{
			f+=1;
		}else {f=0;}
		
			res=r+l;
		ans = res>ans?res:ans;
		
	}
	
	if((f)==n || ans > n)
		{
			fout<<n<<endl;
		}
	else
		{
			fout<<ans<<endl;
		}
		
	return 0;
}
int rcount(int i)
{
	int b=0,r=0,c=0,j;
	for(j=i;j<i+n && !(b==1&& r==1);j++)
	{
		if(s[j%n]=='b')
			b=1;
		if(s[j%n]=='r')
			r=1;
		c++;
		
	}
	return c-1;
}
int lcount(int i)
{
	int b=0,r=0,j,w=0,c=0;
	for(j=i;c<n && !(b&& r);j--)
	{
		if(s[(j+n)%n]=='b')
			b=1;
		else if(s[(j+n)%n]=='r')
			r=1;
		c++;
	}
	return c-1;
}