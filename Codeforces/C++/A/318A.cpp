#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long n,p;//number,place
	long long ans;
	long long oddn;//odd numbers
	cin>>n>>p;
	if(n%2==0)
		oddn=n/2;
	else
		oddn=(n/2)+1;
	if(p<=oddn)
	{
		ans=(p*2)-1;
	}
	else{
		ans = (p-oddn)*2;
	}
	cout<<ans;
	return 0;
}