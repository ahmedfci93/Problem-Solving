#include <iostream>
using namespace std;

int main() {
	int i,n,m,tmp=0;
	cin>>n;
	while(1)
	{
		n++;
		tmp=0;
		for(i=0;i<=9&&tmp<2;i++)
		{
			tmp=0;
			m=n;
			if(n%10==i) tmp++;
			if((n/10)%10==i) tmp++;
			if((n/100)%10==i) tmp++;
			if((n/1000)%10==i) tmp++;
		}
		if(tmp<2)
			break;
	}
	cout<<n;
	return 0;
}