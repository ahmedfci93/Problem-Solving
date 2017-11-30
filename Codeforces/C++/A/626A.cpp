#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void dir_num(char c);
int dir[4]={};
int main() {
	int n,ans=0,i,j;
	
	string s;
	cin>>n>>s;
	for(i=0;i<n;i++)
	{	
		dir_num(s[i]);
		for(j=i+1;j<n;j++)
		{
			dir_num(s[j]);
			if(dir[0]==dir[1] && dir[2]==dir[3])
				ans++;
		}
		memset(dir,0,sizeof(dir));
	}
	cout <<ans;
	return 0;
}

void dir_num(char c)
{
	if(c=='U')
		 dir[0]++;
	else if(c=='D')
	 	dir[1]++;
	else if(c=='R')
		 dir[2]++;
	else if(c=='L')
		 dir[3]++;

}
