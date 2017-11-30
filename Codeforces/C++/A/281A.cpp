#include <iostream>
#include <cctype>
using namespace std;

int main() {
	int i,sz;
	char c;
	string s;
	cin>>s;
	c=toupper(s[0]);
	cout<<c;
	i=1;
	while(s[i])
	{
		cout<<s[i];
		i++;
	}
	return 0;
}