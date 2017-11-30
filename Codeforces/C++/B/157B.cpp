#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,i;
	int ri[102]={};
	double t=3.1415926536;
	long long red=0;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>ri[i];
	sort(ri,ri+n+1,greater<int>());
	for(i=0;i<=n;i+=2)
		red+=(ri[i]*ri[i]-ri[i+1]*ri[i+1]);
	cout<<red*t;
	return 0;
}
