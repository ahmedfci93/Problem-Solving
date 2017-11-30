#include <iostream>
using namespace std;

int main() {
	int n,k,num,i,c=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>num;
		if(5-num>=k)
		{
			c++;
		}
	}
	cout<<c/3;
	return 0;
}