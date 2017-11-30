#include <iostream>
using namespace std;

int main() {
	int x,rem,ans;
	cin>>x;
	if(x%5==0)
	{
		ans=x/5;
	}
	else
	{
		ans=x/5+1;
	}
	cout <<ans;
	return 0;
}