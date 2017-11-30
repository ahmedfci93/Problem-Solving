#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back

#define rloopi(n) for(int i=int(n)-1;i>-1;i--)
#define rloopj(n) for(int j=int(n)-1;j>-1;j--)
#define loopi(n) for(int i=0;i<int(n);i++)
#define loopi1(n) for(int i=1;i<=int(n);i++)
#define loopj(n) for(int j=0;j<int(n);j++)
#define loopj1(n) for(int j=1;j<=int(n);j++)


int main() {
	string s;
	bool ans=0;
	int n;
	vector<string> seats;
	
	sf("%d",&n);
	loopi(n)
	{
		cin>>s;
		if(!ans)
		{
			if(s[0]=='O'&&s[1]=='O') s[0]=s[1]='+',ans=true;
			else if(s[3]=='O'&&s[4]=='O')s[3]=s[4]='+',ans=true;
		}
		seats.pb(s);
	}
	if(ans)
	{
		cout<<"YES"<<endl;
		loopi(n)
		{
			cout<<seats[i]<<endl;
		}
	}else cout<<"NO";
	return 0;
}