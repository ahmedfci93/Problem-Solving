#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
	int n,m,i,x,y;
	string s,s1;
	map<string,string> ans;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>s>>s1;
		x=s.size();
		y=s1.size();
		if(x>y) ans[s]=s1;
		else ans[s]=s;
	}
	for(i=0;i<n;i++)
	{
		cin>>s;
		cout<<ans[s]<<" ";
	}
	return 0;
}