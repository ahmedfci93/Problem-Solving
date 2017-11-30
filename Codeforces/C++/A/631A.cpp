#include <iostream>
using namespace std;

int slove()
{
	int i,num,ret;
	ret=0;
	for(i=0;i<n;i++)
	{
		cin>>num;
		ret|=num;
	}
	return ret;
}

int main() {
	int n;
	cin>>n;
	cout<<slove(n)+slove(n);
	return 0;
}
