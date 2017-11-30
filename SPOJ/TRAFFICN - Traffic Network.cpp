#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <string.h>
using namespace std;
class edge
{
	public: int ind,cost;
		bool flag;
};
bool operator <(edge a,edge b)
{
	if(a.flag!=b.flag) return a.flag<b.flag;
	if(a.cost!=b.cost) return a.cost<b.cost;
	return a.ind<b.ind;
}
vector < vector<int> >way(10001),cost(10001);
vector < vector<int> > way2(10001),cost2(10001);
int dis[10001];
int n,m,k,s,t;
 
int dijkstra()
{
	int ans=-1;
	set<edge> q;
	edge tmp;
	for(int i=0;i<way[s].size();i++)
	{
		tmp.ind=way[s][i],tmp.cost=cost[s][i],tmp.flag=0;
		q.insert(tmp);
	}
	for(int i=0;i<way2[s].size();i++)
	{
		tmp.ind=way2[s][i],tmp.cost=cost2[s][i],tmp.flag=1;
		q.insert(tmp);
	}
	dis[s]=0;
	while(!q.empty())
	{
		tmp=*q.begin();
		q.erase(q.begin());
		if(dis[tmp.ind]!=-1 &&dis[tmp.ind]<tmp.cost)continue;
		dis[tmp.ind]=tmp.cost;
		if(tmp.ind==t)
		{
			if(ans!=-1&&ans<tmp.cost)return ans;
			ans=tmp.cost;
		}
		else
		{
			for(int i=0;i<way[tmp.ind].size();i++)
			{
				edge tmp1;
				tmp1.ind=way[tmp.ind][i],tmp1.cost=cost[tmp.ind][i]+tmp.cost,tmp1.flag=tmp.flag;
				q.insert(tmp1);
			}
			for(int i=0;i<way2[tmp.ind].size()&&!tmp.flag;i++)
			{
				edge tmp1;
				tmp1.ind=way2[tmp.ind][i],tmp1.cost=cost2[tmp.ind][i]+tmp.cost,tmp1.flag=1;
				q.insert(tmp1);
			}
		}
	}
	return ans;
}
 
int main() {
	int d,c,u,v,l,a,ts;
	scanf("%d",&ts);
	while(ts--)
	{
		scanf("%d%d%d%d%d",&n,&m,&k,&s,&t);
		for(int i=1;i<=n;i++)
			way[i].clear(),cost[i].clear(),way2[i].clear(),cost2[i].clear();
		memset(dis,-1,sizeof(dis));
		for(int i=1;i<=m;i++)
		{
			scanf("%d%d%d",&d,&c,&l);
			way[d].push_back(c);
			cost[d].push_back(l);
		}
		for(int i=1;i<=k;i++)
		{
			scanf("%d%d%d",&u,&v,&a);
			way2[u].push_back(v);
			cost2[u].push_back(a);
			way2[v].push_back(u);
			cost2[v].push_back(a);
		}
		printf("%d\n",dijkstra());
	}
	return 0;
} 
