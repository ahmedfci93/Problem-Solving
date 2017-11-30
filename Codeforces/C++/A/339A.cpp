#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s;
	int sz,i,j=0;//sz(size)
	int ans[100];
	cin>>s;
	sz=s.size();
	for(i=0;i<sz;i++)
		if(s[i]!='+')
		{
			ans[j]=s[i]-'0';
			j++;
		}
	sort(ans,ans+j);
	for(i=0;i<j-1;i++)
		cout<<ans[i]<<'+';
	cout<<ans[j-1];
	return 0;
}