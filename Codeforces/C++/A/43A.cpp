#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
	map<string,int> goals;
	string s,win;
	int n,i,mx=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		goals[s]++;
	}
	 map<string, int>::iterator it;
	for(it = goals.begin(); it != goals.end(); it++) {
    	if(mx < it->second) win=it->first,mx=it->second;
}
	cout<<win;
	return 0;
}