#include <iostream>
#include <set>
using namespace std;


int main() {
	int n,i,j,ind=0,x=0;
	int num[5];
	cin>>n;
	for(i=1;x<=n;i++)
	{
		for(j=i;j%5==0;j/=5)x++;
		if(x==n)num[ind++]=i;
	}
	cout<<ind<<endl;
	for(i=0;i<ind;i++)
		cout<<num[i]<<" ";
	return 0;
}