#include <bits/stdc++.h>
using namespace std;


int main() {
	int n,i,m,score,j,sz;
	string s;
	vector<pair<int,string> > teams[100001];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>s>>j>>score;
		teams[j].push_back(make_pair(score,s));
	}
	for(i=1;i<=m;i++)
	{
		sort(teams[i].begin(),teams[i].end());
		sz=teams[i].size();
		if(sz>2&&teams[i][sz-2].first==teams[i][sz-3].first)
			cout<<"?"<<endl;
		else
			cout<<teams[i][sz-1].second<<" "<<teams[i][sz-2].second<<endl;
	}
	return 0;
}