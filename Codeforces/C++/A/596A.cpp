#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main() {
	int x,y,n,minx=1001,miny=1001,maxx=-1001,maxy=-1001,ans,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		maxx=max(maxx,x);
		maxy=max(maxy,y);
		minx=min(minx,x);
		miny=min(miny,y);
	}
	ans=abs(maxx-minx)*abs(maxy-miny);
	if(ans)
	cout<<ans;
	else cout<<-1;
	return 0;
}