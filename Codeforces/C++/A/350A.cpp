#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,m;
	int a,b,vm=1e9,vx=0,w=1e9,i;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a;
		vm=min(vm,a);
		vx=max(vx,a);
	}
	for(i=0;i<m;i++)
	{
		cin>>b;
		w=min(w,b);
	}
	if(max(2*vm,vx)<w) cout<<max(2*vm,vx);
	else cout<<-1;
	return 0;
}