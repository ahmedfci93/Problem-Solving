#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a,b,c,a1,a2,a3;
	cin>>a1>>a2>>a3;
	a=sqrt((a1*a3)/a2);
	b=a1/a;
	c=a2/b;
	cout<<4*(a+b+c);
	return 0;
}