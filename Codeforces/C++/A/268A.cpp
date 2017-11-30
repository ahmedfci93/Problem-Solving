#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,i,j=0,k=0,c=0;
	int h[30],g[30];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>h[i]>>g[i];
	sort(h,h+n);
	sort(g,g+n);
	for(i=0;i<n;i++)
	{	
		
		for(j;j<n;j++)
		{
			if(h[i]==g[j])
			{
				c++;
				k++;//counter to know how meny time repeated after sort
			}
			else if(h[i]<g[j])
			{
				break;
			}
		}
		j=j-k;//to start from first appear of that value because maybe appear one more time in other sorted array
		k=0;
	}
	cout<<c;
	return 0;
}