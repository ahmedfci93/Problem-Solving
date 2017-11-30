#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	map<string,int> g;//grid
	string s;
	int n,i,ans=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		g[s]++;
		ans=max(ans,g[s]);
	}
	cout<<ans;
	return 0;
}