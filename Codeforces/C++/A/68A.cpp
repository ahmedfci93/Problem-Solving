#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n,v,i;
	int vec[3]={0};//x,y,z
	cin>>n;
	for(i=0;i<n*3;i++)
	{
		scanf("%d",&v);
		vec[i%3]+=v;//sum all x,y,z in vec[0],vec[1],vec[2] respectively
	}
	if(vec[0] | vec[1] | vec[2])
		cout<<"NO";
	else 	cout<<"YES";
	
	return 0;
	
}