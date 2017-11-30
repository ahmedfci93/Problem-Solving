#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int fl[100][200];//fl(floor)
	int n,m,i,j,ans=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
		for(j=0;j<2*m;j++)
			cin>>fl[i][j];
	for(i=0;i<n;i++)
		for(j=0;j<2*m;j+=2)
			if(fl[i][j]||fl[i][j+1])
				ans++;
	cout<<ans;
	return 0;
}