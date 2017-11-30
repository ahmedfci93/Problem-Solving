#include <iostream>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
 
int main() {
	int n,i,m,ans=0;
	map<int,int>a;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		a[m]++;
	}
	map<int,int>::iterator it;
	for(it=a.begin();a.end()!=it;it++)
	{
		if((n+1)/2<it->second) return cout<<"NO",0;
	}
	cout<<"YES";
	return 0;
}