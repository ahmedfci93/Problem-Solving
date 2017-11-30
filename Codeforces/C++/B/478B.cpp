#include <iostream>
using namespace std;

int main() {
	long long n,m,mi,mx;//mi(min),mx(max)
	long long r,d;//r(remainder),d(division)
	cin>>n>>m;
	r=n%m;
	d=n/m;
	mx=((n-m)*(n+1-m))/2;
	mi=(m-r)*((d-1)*d)/2;
	mi+=r*d*(d+1)/2;
	cout<<mi<<" "<<mx;
	return 0;
}