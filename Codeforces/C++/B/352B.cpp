#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	int n,i,d=0,key,f,a;
	int sz=0;
	map<int,vector<int> > num;
	map<int,int> ans;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		num[a].push_back(i);
	}
	map<int,vector<int> >::iterator it;
	for(it=num.begin();it!=num.end();it++)
	{
		f=1;
		key=it->first;
		sz=num[key].size();
		if(sz==1)
			d=0;
		else
		{	
			d=num[key][1]-num[key][0];
			for(i=1;i<sz-1;i++)
			{
				if(d!=num[key][i+1]-num[key][i])
					{
						f=0;
						break;
					}
			}
		}
		if(f) ans[key]=d;
	}
	cout<<ans.size()<<endl;
	map<int,int>::iterator itt;
	for(itt=ans.begin();itt!=ans.end();itt++)
			cout<<itt->first<<" "<<itt->second<<endl;
	return 0;
}