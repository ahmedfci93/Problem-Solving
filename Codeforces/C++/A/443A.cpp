#include <iostream>
#include <set>
using namespace std;

int main() {
	string s;
	int i,size;
	set<char> us ;//unique string
	getline(cin,s);
	size=s.size();
	for(i=0;i<size;i++)
	{
		if(s[i]>=97 && s[i]<=122)
			us.insert(s[i]);
	}
	cout<<us.size();
	return 0;
}