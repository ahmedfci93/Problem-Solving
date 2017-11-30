#include <iostream>
using namespace std;

int main() {
	int n,m,a,am;//am(numbers after m)
	cin>>n>>m;
	am=n-m;
	if(m<=am)
		a=m+1;
	else a=m-1;
	if(a)
	cout<<a;
	else cout<<m;
	return 0;
}