#include <iostream>
using namespace std;
int nd(long n);
int main() {
	long long n,d,i,j=1,sum=0;
	cin>>n;
	d=nd(n);
	if(n<10)
		sum=n;
	else {
		sum=9;
		for(i=2;i<d;i++)
		{
			j *=10;
			sum +=j*9*i;//ex to get numbers of 2 digits between 10-99, sum+= 10*9*2=90
		}
		sum+= i*(n-(j*10-1));//for reminder number (last d digits)
	}
	cout<<sum;
	return 0;
}
int nd(long n)
{
	int c=0;
	while(n)
	{
		n/=10;
		c++;
	}
	return c;
}