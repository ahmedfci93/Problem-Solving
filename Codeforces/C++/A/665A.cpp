#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b,ans=0,ta,tb,h,m,x,y,x1,y1;
	scanf("%d%d%d%d",&a,&ta,&b,&tb);
	scanf("%d:%d",&h,&m);
	
	x=h*60+m;
	y=x+ta;
	for(x1=5*60;x1<24*60;x1+=b)
	{
		if(x1<y&&x1+tb>x)
			ans++;
	}
	cout<<ans;
	return 0;
}