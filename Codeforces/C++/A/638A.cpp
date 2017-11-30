#include <iostream>
using namespace std;

int main() {
	int n,a,ans;
	cin>>n>>a;
	if(a%2==0) ans= (n-a)/2;
	else ans=(a-1)/2;
	cout<<ans+1;
	return 0;
}