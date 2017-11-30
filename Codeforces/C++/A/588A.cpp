#include <iostream>
using namespace std;

int main() {
	int minc,i,n,ans=0;//minc (minimum cost)
	int ai[100000],pi[100000];
	
	cin>>n;
	for(i=0;i<n;i++)
		cin>>ai[i]>>pi[i];
	minc=pi[0];//initial
	for(i=0;i<n;i++)
	{
		if(minc>pi[i])
			minc=pi[i];
		ans+=minc*ai[i];
	}
	cout<<ans;
	return 0;
}