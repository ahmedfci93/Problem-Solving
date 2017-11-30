#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,i,x,y,j,g1,g2;
	int ch[100];
	cin>>m;
	g1=g2=0;
	for(i=0;i<m;i++)
	{
		cin>>ch[i];
		g2+=ch[i];
	}
	cin>>x>>y;
	g1+=ch[0];
	g2-=ch[0];
	for(i=1;i<m;i++)
	{
		if( g1>=x && g1<=y && g2>=x && g2<=y)
			return cout<<i+1,0;
		g1+=ch[i];
		g2-=ch[i];
	}
	cout<<0;
	return 0;
}