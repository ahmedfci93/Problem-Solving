#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;
string in[10000];
bool flag[100001];
vector<int> node(10,-1);
vector< vector<int> > tree;//trie tree
int main() {
	int c,n,ans;
	scanf("%d",&c);
	while(c--)
	{
		ans=1;
		scanf("%d",&n);
		tree.clear();
		memset(flag,0,sizeof(flag));
		for(int i=0;i<n;i++)cin>>in[i];
		tree.push_back(node);
		for(int i=0;i<n&&ans;i++)
		{
			int cur=0,tmp=0;
			for(int j=0;j<in[i].size();j++)
			{
				int dig=in[i][j]-'0';
				if(tree[cur][dig]!=-1) cur=tree[cur][dig];
				else
				{
					tmp=1;
					tree[cur][dig]=tree.size();
					cur=tree.size();
					tree.push_back(node);
				}
				if(flag[cur])
				{
					ans=0;
					break;
				}
			}
			if(!tmp)
			{
				ans=0;
				break;
			}
			
			flag[cur]=1;
		}
		if(ans==1)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}