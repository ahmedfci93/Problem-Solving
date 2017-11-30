#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int i,ans=0,hs,hu;
	int x[5]={500,1000,1500,2000,2500};
	int m[5];
	int w[5];
	for(i=0;i<5;i++)
		cin>>m[i];
	for(i=0;i<5;i++)
		cin>>w[i];
	cin>>hs>>hu;
	ans=(hs*100)-(50*hu);
	for(i=0;i<5;i++)
	{
		ans+=max( (x[i]/10)*3,((x[i]-m[i]*(x[i]/250)))-50*w[i]);
	}
	cout<<ans;
	return 0;
}