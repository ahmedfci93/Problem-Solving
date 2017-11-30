#include <iostream>
using namespace std;
int main() {
	float h,f,u,d,ih,s;
	int ans;
	scanf("%f%f%f%f",&h,&u,&d,&f);
	while(h)
	{
		ih=0;
		ans=0;
		f=(f/100)*u;
		while(1)
		{
			ans++;
			if(u>0)ih+=u;
			u-=f;
			if(ih>h) break;
			ih-=d;
			if (ih<0)break;
		}
		if(ih>=0) cout<<"success on day "<<ans<<endl;
        else cout<<"failure on day "<<ans<<endl;
		scanf("%f%f%f%f",&h,&u,&d,&f);
	}
	return 0;
}