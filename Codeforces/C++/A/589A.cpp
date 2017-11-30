#include <iostream>
#include <stdio.h>
#include <map>
#include <string.h>
#include <vector>
#include<algorithm>

using namespace std;
void solve(string s);
map <string,vector<string> > ans;
int main() {
	int n,i,sz,j;
	string s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		solve(s);
	}
	cout<<ans.size()<<endl;
	map <string,vector<string> > ::iterator it;
	for(it=ans.begin(); it!=ans.end(); ++it)
	{
		sz=it->second.size();
		cout<<sz;
		for(i=0;i<sz;i++)
			cout<<" "<<it->second[i];
		cout<<endl;
	}
	return 0;
}

void solve(string s)
{
	int sz,i,pa;//pa (position of @),sz(size)
	string ts,is;//ts(temp string),is(index string of map)
	ts=s;
	sz=s.size();
	for(i=0;i<sz;i++)
	{
		ts[i]=tolower(ts[i]);
	}
	pa=ts.find('@');
	string	sb=ts.substr(pa);
	if(sb=="@bmail.com")
	{
		for(i=0;i<pa;i++)
		{
			if(ts[i]=='+')
				break;
			else if(ts[i]!='.')
				is+= ts[i];
		}
		is=is+sb;
		ans[is].push_back(s);
	}else ans[ts].push_back(s);
}