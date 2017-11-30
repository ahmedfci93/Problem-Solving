//1st Solution the Best one by using Segment Tree
#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <map>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back

int segTree[250000];
int in[100000][2];
set <int> s;
map<int,int> rank;

void update(int node,int i,int j,int s,int e)
{
	//cout<<i<<" "<<j<<endl;
	if(s>j||e<i)return;
	if(i>=s&&j<=e)
	{
		segTree[node]++;
		return;
	}
	int mid=(i+j)/2;
	update(node*2,i,mid,s,e);
	update(node*2+1,mid+1,j,s,e);
	return;
}

int solve(int node,int s,int e,int ind)
{
	if(ind<s||ind>e)return 0;
	if(s==e)
	{
		if(ind==s)return segTree[node];
		else return 0;
	}
	int ret=segTree[node];
	int mid=(s+e)/2;
	ret+=solve(node*2,s,mid,ind);
	ret+=solve((node*2)+1,mid+1,e,ind);
	return ret;
}

int main() {
	int i,j,t,n,cnt,tmp,ret;
	sf("%d",&t);
	while(t--)
	{
		for(i=0;i<250000;i++)segTree[i]=0;
		cnt=ret=0;
		sf("%d",&n);
		for(i=0;i<n;i++)
		{
			sf("%d%d",&in[i][0],&in[i][1]);
			s.insert(in[i][0]);
			s.insert(in[i][1]);
		}
		while(!s.empty())
		{
			tmp=*s.begin();
			s.erase(s.begin());
			rank[tmp]=++cnt;
		}
		for(i=0;i<n;i++)
		{
			in[i][0]=rank[in[i][0]];
			in[i][1]=rank[in[i][1]];
		}
		for(i=0;i<n;i++)
		{
			update(1,1,cnt,in[i][0],in[i][1]);
		}
		for(i=1;i<=cnt;i++)ret=max(ret,solve(1,1,cnt,i));
		pf("%d\n",ret);
	}
	return 0;
}
//=====================================================
//2nd Solution
#include <iostream>
#include <utility> 
#include <algorithm>
using namespace std;

int main() {
	int t,n,i,j,en,ex,ans,cnt;
	cin>>t;
	while(t--)
	{
		ans=0;
		pair <int,int> a[100];
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>en>>ex;
			a[i]=make_pair(en,ex);
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			cnt=0;
			for(j=0;j<n;j++)
			{
				if(a[j].first<=a[i].second && a[j].second>=a[i].second)cnt++;
			}
			ans=max(ans,cnt);
		}
		cout<<ans<<endl;
	}
	return 0;
}
//=======================================================
//3rd Solution
#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back
int in[200];
bool check[10000001];
int last;
int n;
int main() {
	int i,j,t,ans,cnt;
	sf("%d",&t);
	while(t--)
	{
		ans=cnt=0;
		sf("%d",&n);
		for(i=0;i<n*2;i+=2)
		{
			sf("%d%d",&in[i],&in[i+1]);
			check[in[i]]=1;//enter=1,exist=0
		}
		sort(in,in+(n*2));
		for(i=0;i<n*2;i++)
		{
			if(check[in[i]])
			{
				cnt++;
				ans=max(ans,cnt);
				check[in[i]]=0;
			}else cnt--;
		}
		pf("%d\n",ans);
	}
}