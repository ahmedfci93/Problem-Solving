#include <iostream>
using namespace std;

int main() {
	int i,n,t,s;
	char c='.';
	string str;
	cin>>n>>str;
	for(i=0;i<n;i++)
	{
		if(str[i]!='.'&&c=='.')
		{
			s=i;
			c=str[i];
		}
		if(str[i]==c)
			t=i;
	}
	if(c=='R')
		cout<<s+1<<" "<<t+2;
	else  cout<<t+1<<" "<<s;
	
	return 0;
}