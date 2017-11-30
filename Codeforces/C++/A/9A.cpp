#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int y,x,a;
	cin>>x>>y;
	a=max(x,y);
	a=6-(a-1);
	if( a!=6 )
	{	
		for(int i=2;i<=3;i++)
		{
			if(a%i==0 && 6%i==0)
				return cout<<a/i<<"/"<<6/i,0;
		}
		cout<<a<<"/"<<6;
	}else cout<<1<<"/"<<1;
	return 0;
}