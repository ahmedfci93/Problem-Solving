#include <iostream>
using namespace std;

int main() {
	int ans=0,n,i;
	string s;
	cin>>n;
	while(n)
	{
		cin>>s;
		if(s[0]=='+'||s[1]=='+')
			ans++;
		else if(s[0]=='-'||s[1]=='-')
			ans--;
		n--;
	}
	cout<<ans;
	return 0;
}