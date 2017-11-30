#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int i,a,b,d=0,ca=0,cb=0;//d (draw),ca(count first player),cb(second player)
	cin>>a>>b;
	for (i=1;i<=6;i++)
	{
		if(abs(a-i)<abs(b-i))
			ca++;
		else if(abs(a-i)>abs(b-i))
			cb++;
		else d++;
	}
	cout<<ca<<" "<<d<<" "<<cb;
	return 0;
}