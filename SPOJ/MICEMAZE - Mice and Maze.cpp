#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<int> arr[101];
vector<int> cost[101];
bool vis[101];
class edge
{
	public:int node,cost;
};
bool operator < (edge a,edge b)
{
	if(a.cost!=b.cost)return a.cost<b.cost;
	return a.node<b.node;
}
set<edge> q;
int n,e,t,m;
int main() {
	int i,a,b,c,ans=1;
	scanf("%d%d%d%d",&n,&e,&t,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		arr[b].push_back(a);
		cost[b].push_back(c);
	}
	for(i=0;i<arr[e].size();i++)
	{
		edge tmp;
		tmp.node=arr[e][i];
		tmp.cost=cost[e][i];
		q.insert(tmp);
	}
	vis[e]=1;
	while(!q.empty())
	{
		edge tmp;
		tmp= *q.begin();
		q.erase(q.begin());
		if(tmp.cost<=t && vis[tmp.node]==0)
		{
			ans++;
			vis[tmp.node]=1;
		}
		if(tmp.cost<t)
		{
			for(i=0;i<arr[tmp.node].size();i++)
			{
				edge tmp1;
				if(!vis[arr[tmp.node][i]])
				{
					tmp1.node=arr[tmp.node][i];
					tmp1.cost=cost[tmp.node][i]+tmp.cost;
					q.insert(tmp1);
				}
			}
		}
	}
	cout<<ans;
	return 0;
}