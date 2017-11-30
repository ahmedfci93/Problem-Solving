#include <iostream>
#include <stdlib.h>
using namespace std;
bool found(int n);
int main() {
	long long n,ans=1;
	cin>>n;
	n++;
	while(!found(n))
	{
		n++;
		ans++;
	}
	cout<<ans;
	return 0;
}
bool found(int n)
{
	while(n)
	{
		if(abs(n%10)==8)
		{
			return true;
		}
		n/=10;
	}
	return false;
}