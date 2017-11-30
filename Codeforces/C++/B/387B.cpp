#include <iostream>
using namespace std;

int main() {
int i,n,m,ans=0;
int a[3000]={};
int b[3000]={};
cin>>n>>m;
for(i=0;i<n;i++)
{
	cin>>a[i];
}
for(i=0;i<m;i++)
{
	cin>>b[i];
	if(a[ans]<=b[i]&&ans<n) 
	{
		ans++;
	}
}
cout<<n-ans;	
return 0;
}