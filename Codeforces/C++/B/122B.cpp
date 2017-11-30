#include <iostream>
#include <string>
using namespace std;

int main() {
	int d4=0,d7=0,sz;
	string s;
	cin>>s;
	sz=s.size();
	while(--sz>-1)
	{
		if(s[sz]=='4')d4++;
		else if(s[sz]=='7')d7++;
	}
	if(d4==0 && d7==0)
		cout<<-1;
	else
	{
		if(d4>=d7)cout<<4;
		else cout<<7;
	}
	return 0;
}