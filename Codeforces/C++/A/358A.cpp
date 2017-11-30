#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,i,j,x1,x2,x3,x4;
	int points[1000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>points[i];
	if(n>2)
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			{
				x1=min(points[i],points[i+1]);
				x2=max(points[i],points[i+1]);
				x3=min(points[j],points[j+1]);
				x4=max(points[j],points[j+1]);
				if( (x3>x1 && x4>x2 && x3<x2) || (x3<x1 && x4<x2 &&x4>x1))
				{
					cout<<"yes";
					return 0;
				}
			}
		}
	cout<<"no";
	return 0;
}