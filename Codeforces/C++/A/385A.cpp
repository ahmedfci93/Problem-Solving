#include <iostream>
using namespace std;

int main() {
	int n,c,pd,i,p=0,ld,nd;//profit per day,profit,last day,next day
	cin>>n>>c>>ld;
	for(i=1;i<n;i++)
	{
		cin>>nd;
		pd=ld-nd;
		if(pd>p)
			p=pd;
		ld=nd;
	}
	if(p-c>0)
		cout<< p-c;
	else cout<<0;
	return 0;
}