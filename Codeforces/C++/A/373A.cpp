#include <iostream>
using namespace std;
int main() {
	char c;
	int k,i,j,ans=0;
	int count[10]={0};
	cin>>k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>c;
			if(c>='0' && c<='9')
				count[c-'0']++;
		}
	}
	for(i=1;i<=9;i++)
	{
		if(count[i]> k*2)
			ans=1;	
	}
	if(ans)
		cout<<"NO";
	else cout<<"YES";
	return 0;
}

