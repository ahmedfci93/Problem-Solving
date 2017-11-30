#include <iostream>
using namespace std;

int main() {
	int n,m,i,j;
	string s;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>s;
		for(j=0;j<m;j++)
		{
			if(s[j]=='-')
				cout<<s[j];
			else
			{
				if( (i+j)%2==0)
					cout<<'B';
				else
					cout<<'W';
			}
		}
		cout<<endl;
	}
	return 0;
}