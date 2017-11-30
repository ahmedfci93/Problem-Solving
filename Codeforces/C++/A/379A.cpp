#include <iostream>
using namespace std;

int main() {
	int ans,a,b;
	cin>>a>>b;
	ans=a;
	while(a>=b)
	{
		ans+=(a/b);
		a=(a/b)+(a%b);
	}
	cout<<ans;
	return 0;
}