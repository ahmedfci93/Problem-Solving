#include <iostream>
using namespace std;

int main() {
	int n,m,i,j,c=0;//c is a switch of #(start,end)
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<m;j++)
				cout<<"#";
			cout<<endl;
			c++;
		}else
		{
			if(c%2==0)
			{
				cout<<"#";
			}	
			for(j=0;j<m-1;j++)
				cout<<".";
			if(c%2)
			{
				cout<<"#"<<endl;
			}else cout<<endl;
		}
	}
	return 0;
}