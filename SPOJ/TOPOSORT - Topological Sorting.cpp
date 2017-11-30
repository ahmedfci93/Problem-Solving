#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
using namespace std;
int cnt[10001];
int n,m;
set<int> q;
vector<int> ans;
vector <int> list[10001];
int main() {
	int i,x,y;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&x,&y);
		list[x].push_back(y);
		cnt[y]++;
	}
	for(i=1;i<=n;i++)
		if(!cnt[i])q.insert(i);
	while(!q.empty())
	{
		x= *q.begin();
		ans.push_back(x);
		q.erase(q.begin());
		for(i=0;i<list[x].size();i++)
		{
			y=list[x][i];
			if(!(--cnt[y])) q.insert(y);
		}
	}
	if(ans.size()<n)
		printf("Sandro fails.");
	else
		for(i=0;i<ans.size();i++) printf("%d ",ans[i]);
	return 0;
}