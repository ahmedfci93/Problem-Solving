#include <iostream>
using namespace std;

int main() {
	string s;
	int i,sz,f=0;
	cin>>s;
	sz=s.size();
	for(i=0;i<sz;i++)
	{
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' )
		{
			i+=2;
			f=1;
		}else
		cout<<s[i];
		if(f) cout<<" ";
		f=0;
		
	}
	return 0;
}