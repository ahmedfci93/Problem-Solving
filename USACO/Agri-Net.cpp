/*
ID: ahmed.i3
PROG: agrinet
LANG: C++                  
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
class edge
{
	public:
		int s,e,cost;
};
int n,cnt;
int grid[101][101],parent[101],rank[101];
edge arr[10001];

bool cmp(edge b,edge a)
{
	if(b.cost!=a.cost) return b.cost<a.cost;
	if(b.s!=a.s)return b.s<a.s;
	return b.e<a.e;
}
int find(int ind)
{
	if(parent[ind]==ind) return ind;
	return parent[ind]=find(parent[ind]);
}
void merge(int x,int y)
{
	if(rank[x]>rank[y])
		parent[y]=x;
	else if(rank[y]>rank[x])
		parent[x]=y;
	else rank[x]++,parent[y]=x;
}
int main() {
	FILE *fin  = fopen ("agrinet.in", "r");
    FILE *fout = fopen ("agrinet.out", "w");
	int i,j;
	fscanf (fin,"%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			fscanf (fin,"%d",&grid[i][j]);
			arr[cnt].s=i;
			arr[cnt].e=j;
			arr[cnt].cost=grid[i][j];
			cnt++;
		}
	sort(arr,arr+cnt,cmp);
	for(i=1;i<=n;i++)parent[i]=i;
	int ans=0;
	for(i=0;i<cnt;i++)
	{
		int xroot,yroot;
		xroot=find(arr[i].s);
		yroot=find(arr[i].e);
		if(xroot==yroot)continue;
		ans+=arr[i].cost;
		merge(xroot,yroot);
	}
	fprintf (fout,"%d\n",ans);
	return 0;
}