#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int ans=min((k*l)/nl,c*d);
	cout<<min (ans,p/np)/n;
	return 0;
}