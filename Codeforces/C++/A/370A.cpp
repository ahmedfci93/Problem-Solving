#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int r1,r2,c1,c2;
	cin>>r1>>c1>>r2>>c2;
	if(r1!=r2&& c1!=c2)
		cout<< 2;
	else
		cout <<1;
	cout<<" ";
	if( (r1%2==1 && c1%2==0 || r1%2==0&&c1%2) && (r2%2==1 && c2%2==0 || r2%2==0&&c2%2))
	{
		if(abs(r1-r2)==abs(c1-c2))
			cout<<1;
		else cout<< 2;
	}
	else if ( (r1%2==1 && c1%2==1 || r1%2==0&&c1%2==0) && (r2%2==1 && c2%2==1 || r2%2==0&&c2%2==0))
	{
		if(abs(r1-r2)==abs(c1-c2))
			cout<<1;
		else cout<< 2;
	}else cout<<0;
	cout<<" ";
	cout<<max(abs(c1-c2),abs(r1-r2));
	return 0;
}