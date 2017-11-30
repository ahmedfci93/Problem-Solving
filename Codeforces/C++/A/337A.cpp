#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,m,d=1000,i;
	int p[50];
	cin>>n>>m;
	for(i=0;i<m;i++)
		cin>>p[i];
	sort(p,p+m, greater<int>() );
	for(i=0;i+n-1<m;i++)
		if(d>p[i]-p[i+n-1])
			d=p[i]-p[i+n-1];
	cout <<d;
	return 0;
}
