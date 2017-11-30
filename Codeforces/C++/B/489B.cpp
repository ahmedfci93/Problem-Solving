#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main() {
	int n,m,i,j,c=0,sj=0;//sj (start j )where 2nd loop will start
	int g[100],b[100];//b boy, g girl
	cin>>n;
	for(i=0;i<n;i++)
		cin>>b[i];
	cin>>m;
	for(i=0;i<m;i++)
		cin>>g[i];
	sort(b,b+n);
	sort(g,g+m);
	for(i=0;i<n;i++)
	{
		for(j=sj;j<m;j++)
		{
			if(abs(b[i]-g[j])<2)
			{
				c++;
				sj=j+1;
				break;
			}
		}
	}
	cout<<c;
	return 0;
}