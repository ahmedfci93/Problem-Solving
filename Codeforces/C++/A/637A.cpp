#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int,int> likes;
	int n,i,a,ans,mx=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		likes[a]+=1;
		if(mx<likes[a])
		{
			mx=likes[a];
			ans=a;
		}
	}
	cout<<ans;
	return 0;
}