#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll solve(ll i);

int main() {
	ll n,i,j,b[200000],min,max,cmax=0,cmin=0;//cmax(count max),cmin(count min)
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>b[i];
		
	}
	sort(b,b+n,greater <int>());
	max=b[0];
	min=b[n-1];
	for(i=0,j=n-1;i<n;i++,j--)
	{
		if(max==b[i])
			cmax++;
		if(min==b[j])
			cmin++;
		if(min!=b[j] && max!=b[i])
			break;
	}
	if(max==min)//if max=min than answer= sum from 1 to n-1
		cout<<max-min<<" "<<solve(n);
	else
	cout<<max-min<<" "<<cmax*cmin;
	return 0;
}
ll solve(ll i)
{
	ll j, sum=0;
	for(j=1;j<i;j++)
		sum+=j;
	return sum;
}