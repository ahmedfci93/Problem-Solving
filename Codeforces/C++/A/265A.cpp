#include <iostream>
#include <string>
using namespace std;

int main() {
	string s,t;
	int i, ans=0,st,ss;//st(size of t),ss(size of s)
	cin>>s>>t;
	st=t.size();
	ss=s.size();
	for(i=0;i<st && ans!=ss-1;i++)
	{
		if(s[j]==t[i])
		{
			ans++;
		}	
	}
	cout<<ans+1;
	return 0;
}