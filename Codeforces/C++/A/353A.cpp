#include <iostream>
using namespace std;

int main() {
	int n,x,i,y,odd=0,sx=0,sy=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		sx+=x;
		sy+=y;
		odd+=((x%2)!=(y%2));
	}
	if(sy%2==0 && sx%2==0)
		cout<<0;
	else if(odd%2==0 && odd>0) 
	{
		cout<<1;
	}
	else cout<<-1;
	return 0;
}