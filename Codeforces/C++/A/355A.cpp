#include <iostream>
#include <math.h> 
using namespace std;
int main() {
	int d,k,temp=1,i;
	cin>>k>>d;
	if(d==0)
	{
		if(k==1)
			cout<<0;
		else cout<<"No solution";
	}
	else
	{
		cout<<d;
		for(i=0;i<k-1;i++)
			cout<<0;
	}
	return 0;
}

