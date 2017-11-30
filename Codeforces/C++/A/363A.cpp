#include <iostream>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
void solve(int d);
int main() {
	long long n,i;
	int d;
	cin>>n;
	if(!n)
		solve(0);
	while(n)
	{
		d=n%10;
		solve(d);
		n/=10;
		cout<<endl;
	}
	
	return 0;
}
void solve(int d)
{
	int i;
	if(d<5)
	{
		cout<< "O-|";
	}
	else if(d>=5)
	{
		cout<< "-O|";
		d-=5;
	}
	i=0;
	for(;i<d;i++)
		cout<<"O";
	cout<<"-";
	for(;i<4;i++)
		cout<<"O";
}