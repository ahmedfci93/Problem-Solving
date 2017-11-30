#include <iostream>
using namespace std;

int main() {
	int n,i;
	int a[21]={0};
	int ex[3]={0};//chest,biceps,back
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		ex[i%3] +=a[i];
	}
	if(ex[0]>ex[1] && ex[0]>ex[2])
		cout<<"chest";
	else if(ex[1]>ex[0] && ex[1]>ex[2])
		cout<<"biceps";
	else cout<<"back";
	return 0;
}