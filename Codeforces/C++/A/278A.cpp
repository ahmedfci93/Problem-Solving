#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n,j,i,ans=0,s,t,x=0;
	int d[101]={};
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>d[i];
		d[i]+=d[i-1];
	}
	cin>>s>>t;
	s--;
	t--;
	if(s>t)swap(s,t);
	ans+=d[t]-d[s];
	ans=min(ans,d[n]-ans);
	cout<<ans;
	return 0;
}