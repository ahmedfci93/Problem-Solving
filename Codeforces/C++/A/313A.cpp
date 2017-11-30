#include <iostream>
using namespace std;

int main() {
	long n,l,m;//number,last number,m copy of n
	cin>>n;
	if(n<0)
	{
		m=n/100;
		l=n%10;
		if(l<(n/10)%10)//last<number before last
		{
			l=(n/10)%10;
		}
		cout<<m*10+l;
	}
	else cout<<n;
	
	return 0;
}