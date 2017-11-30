#include <iostream>
#include <math.h> 
using namespace std;

int main() {
	long long n,ans=0,pow=1;
	int i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		pow*=2;
		ans+=pow;
	}
	cout<<ans;
	return 0;
}