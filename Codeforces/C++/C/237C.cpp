#include <iostream>
using namespace std;
int a,b,k;
bool prime[1000001];
int cnt[1000001];
void generate()
{
	int i,j;
	for(i=2;i<=b;i++)
		prime[i]=1;
	for(i=2;i<=b;i++)
		if(prime[i])
			for(j=i+i;j<=b;j+=i)
				prime[j]=0;
	cnt[2]=1;
	for(i=3;i<=b;i++)  cnt[i]=prime[i]+cnt[i-1];
}
bool check(int l)
{
	int i;
	for(i=a;i<=b-l+1;i++) if (cnt[i+l-1]-cnt[i-1]<k) return false;
	return true;
}
int solve()
{
	int s,e,mid,ret=-1;
	s=1,e=b-a+1;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(check(mid))
		{
			e=mid-1;
			ret=mid;
		}else s=mid+1;
	}
	return ret;
}
int main() {
	int i;
	cin>>a>>b>>k;
	generate();
	cout<<solve();
	return 0;
}