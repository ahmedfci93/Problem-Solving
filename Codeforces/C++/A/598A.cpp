#include <iostream>
using namespace std;

int main() {
	int t;
	long long n,i,ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans = n*(n+1)/2;//summation of all numbers between 1 to n
		for(i=1;i<=n;i*=2)
		{
			ans-=i*2;//subtract i twice ,first for romove it from summation ,second for condition of problem
		}
		cout<<ans<<endl;
	}
	
	return 0;
}