#include <iostream>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
	int n,i,k,j;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==i)
				cout<<k<<" ";
			else
			cout<<0<<" ";
		}
		cout<<endl;
	}
	return 0;
}
