#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
	pair<long,long> a[500000];
	long n,i,ans=0,s=-1e9;//s(finish time in accept order)
	cin>>n;
	i=0;
	while(i!=n)
	{
		cin>>a[i].second>>a[i].first;//reverse input to sort by second (finish time in order)
		i++;
	}
	sort(a,a+n);
	
	for(i=0;i<n;i++)
	{
		if(a[i].second>s)
		{
			ans++;
			s=a[i].first;
		}
		
	}
	cout<<ans;
	return 0;
}