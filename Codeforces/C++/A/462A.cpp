#include <iostream>
using namespace std;

int main() {
	int n,i,j,even,ans=1;
	string board[100];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>board[i];
	for(i=0;i<n;i++)//row
	{
		for(j=0;j<n;j++)//column
		{
			even=0;
			if(j<n-1 && board[i][j+1]=='o')	even++;//move right
			if(i<n-1 && board[i+1][j]=='o') even++;//move down
			if(j>0 && board[i][j-1]=='o') even++;//move left
			if(i>0 && board[i-1][j]=='o') even++;//move up
			if(even%2){ 
				ans=0;
				i=j=n;
			}
		}
	}
	if(ans) cout<<"YES";
	else cout<<"NO";
	return 0;
}