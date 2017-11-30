#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int t,n,r,i,j,id,c;
	bool ans;
	cin>>t;
	for(j=1;j<=t;j++)
	{
		map<int, set<int> > db;
		ans=true;
		int cnt[10001]={};
		cin>>n>>r;
		for(i=0;i<r;i++)
		{
			cin>>id>>c;
			cnt[id]++;
			db[id].insert(c);
		}
		map<int, set<int> >::iterator it;
		for(it=db.begin();it!=db.end();it++)
		{
			if(cnt[it->first]!= it->second.size()) ans=false;
		}
		if(ans) cout<<"Scenario #"<<j<<": possible\n";
		else cout<<"Scenario #"<<j<<": impossible\n";
	}
	return 0;
}