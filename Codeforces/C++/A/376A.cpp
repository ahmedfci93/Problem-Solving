#include <iostream>
#include <vector>
using namespace std;

int main() {
	string s;
	long long i,sz,pivot,r,l,d;
	cin>>s;
	sz=s.size();
	pivot=s.find('^');
	r=l=0;
	for(i=pivot-1;0<=i;i--)
	{
		if(s[i]!= '=')
			l+= (pivot-i)*(s[i]-'0');
	}
	for(i=pivot+1;i<sz;i++)
	{
		if(s[i]!= '=')
			r+= (i-pivot)*(s[i]-'0');
	}
	if(l>r) cout<<"left";
	else if(l<r)cout<<"right";
	else cout<<"balance";
	return 0;
}
