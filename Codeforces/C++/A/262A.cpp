#include <iostream>
using namespace std;
bool solve (int a,int k);
int main() {
	int k,n,a,i,ans=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(solve(a,k))
			ans++;
	}
	cout<<ans;
	return 0;
}

bool solve(int a,int k)
{
	int count=0,re;
	while(a)
	{
		re=a%10;
		if(re==4 || re==7)
			count++;
		a/=10;
	}
	if(count<=k)
		return true;
	return false;

}