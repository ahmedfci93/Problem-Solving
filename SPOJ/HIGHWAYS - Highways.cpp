#include <iostream>
#include <stdio.h>
#include <string.h>
#include <set>
#include <vector>
using namespace std;
int n,m,s,e;
class node{
	public:
		int ind,cost;
};
vector <int> way[100001];
vector <int> costs[100001];
int dis[100001];

bool operator < (node a,node b)
{
	if(a.cost!=b.cost)return a.cost<b.cost;
	return a.ind<b.ind;
}
int dijkstra()
{
	set<node> q;
	node curr;
	curr.ind=s,curr.cost=0;
	q.insert(curr);
	while(!q.empty())
	{
		curr=*q.begin();
		q.erase(q.begin());
		if(dis[curr.ind]!=-1)continue;
		dis[curr.ind]=curr.cost;
		if(curr.ind==e) return curr.cost;
		for(int i=0;i<costs[curr.ind].size();i++)
		{
			node tmp;
			tmp.ind=way[curr.ind][i];
			tmp.cost=costs[curr.ind][i]+curr.cost;
			if(dis[tmp.ind]==-1)
				q.insert(tmp);
		}
	}
	return -1;
}
int main() {
	int t,cost,fr,sec,ans;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		memset(dis,-1,sizeof(dis));
		scanf("%d%d%d%d",&n,&m,&s,&e);
		for(int i=0;i<m;i++)
		{
			scanf("%d%d%d",&fr,&sec,&cost);
			way[fr].push_back(sec);
			costs[fr].push_back(cost);
			
			way[sec].push_back(fr);
			costs[sec].push_back(cost);
		}
		ans=dijkstra();
		if(ans!=-1)
			cout<<ans<<endl;
		else cout<<"NONE"<<endl;
	}
	return 0;
}