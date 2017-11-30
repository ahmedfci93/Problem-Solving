#include <iostream>
using namespace std;

int main() {
	int x,y,ans=0;
	cin>>x>>y;
	while(x&&y)
	{
		if(x==1&&y==1)
			break;
		if(x>=y)
		{
			x-=2;
			y++;
		}
		else if(x<y)
		{
			y-=2;
			x++;
		}
		ans++;
	}
	cout<<ans;
	return 0;
}