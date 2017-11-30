#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	if( (x+y) > 1 && y<=x)
		cout<<4*x-3;
	else if(y<0 && x>y)
		cout<<(y*-4);
	else if(x<0 && (x+y) < 0)
		cout<< -4*x-1;
	else if(y>0 && x<y)
		cout<<4*y-2;
	else cout<<0;
	return 0;
}