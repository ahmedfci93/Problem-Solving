#include <iostream>
#include <string.h>
#include <queue>
#include <utility>

using namespace std;
char in[183][183];
bool vis[183][183];
int out[183][183];
int n,m;
int main() {
	int i,j,t;
	queue < pair<int,int> > q;
	pair<int,int> p;
	cin>>t;
	while(t--)
	{
		memset(vis,0,sizeof(vis));
		memset(out,0,sizeof(out));
		cin>>n>>m;
		for(i=0;i<n;i++) scanf("%s",&in[i]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(in[i][j]=='1')
				{
					vis[i][j]=1;
					p=make_pair(i,j);
					q.push(p);
				}
			}	
		}
		while(!q.empty())
		{
			p=q.front();
			q.pop();
			i=p.first;
			j=p.second;
			if(j-1>-1 && !vis[i][j-1])
			{
				vis[i][j-1]=1;
				out[i][j-1]=out[i][j]+1;
				q.push(make_pair(i,j-1));
			}
			if(i-1>-1 && !vis[i-1][j])
			{
				vis[i-1][j]=1;
				out[i-1][j]=out[i][j]+1;
				q.push(make_pair(i-1,j));
			}
			if(j+1<m && !vis[i][j+1])
			{
				vis[i][j+1]=1;
				out[i][j+1]=out[i][j]+1;
				q.push(make_pair(i,j+1));
			}
			if(i+1<n && !vis[i+1][j])
			{
				vis[i+1][j]=1;
				out[i+1][j]=out[i][j]+1;
				q.push(make_pair(i+1,j));
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cout<<out[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}