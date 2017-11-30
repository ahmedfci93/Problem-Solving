#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,y,x,ans;
	cin>>n>>x>>y;
	ans =ceil((double)(n*y)/100 );
	if(x<ans)
		cout<<ans-x;
	else cout<<0;
	return 0;
}