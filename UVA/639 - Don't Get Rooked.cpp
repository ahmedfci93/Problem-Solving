// Backtrack Algorithm

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s[4];
int n;
bool is_safe(int x,int y)
{
	int i;
	for(i=x;i>-1;i--)
		if(s[i][y]=='r') return false;
		else if (s[i][y]=='X')break;
	for(i=y;i>-1;i--)
		if(s[x][i]=='r') return false;
		else if (s[x][i]=='X')break;
		
	return true;
}
int solve(int i,int j)
{
	if(i==n) return 0;
	int ret=0;
	if(s[i][j]=='.')
	{
		bool safe=is_safe(i,j);
		if(safe)
		{
			s[i][j]='r';
			if(j+1==n)
			{
				ret+=1+solve(i+1,0);
				s[i][j]='.';
				ret=max(ret,solve(i+1,0));
			}else
			{
				ret+=1+solve(i,j+1);
				s[i][j]='.';
				ret=max(ret,solve(i,j+1));
			}
		}else
		{
			if(j+1==n)
			{
				ret+=solve(i+1,0);
			}else
			{
				ret+=solve(i,j+1);
			}
		}
	}else if (s[i][j]=='X')
	{
		if(j+1==n)
			{
				ret+=solve(i+1,0);
			}else
			{
				ret+=solve(i,j+1);
			}
	}
	return ret;
}
int main() {
	int i,j;
	while(cin>>n&&n)
	{
		for(i=0;i<n;i++)cin>>s[i];
		cout<<solve(0,0)<<endl;
	}
	return 0;
}