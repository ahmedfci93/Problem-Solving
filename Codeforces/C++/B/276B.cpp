#include <iostream>
#include <map>
using namespace std;

int main() {
	map<char,int> c;
	int i,sz,res=0;
	string s;
	cin>>s;
	sz=s.size();
	for(i=0;i<sz;i++)
		c[s[i]]++;
	for(i=0;i<sz;i++)
		if(c[s[i]]%2)
			res++;
	if(!res || res%2)
		cout<<"First";
	else cout<<"Second";
	return 0;
}