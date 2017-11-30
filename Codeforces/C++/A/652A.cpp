#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int h1,h2,a,b,s,ans;
	cin>>h1>>h2>>a>>b;
	s=a*8;
	if((h1+s>=h2))
		ans=0;
	else if(a>b)
	{
		ans=ceil((double)(h2-(h1+s))/(12*(a-b)));
	}
	else ans=-1;
	cout<<ans;
	return 0;
}