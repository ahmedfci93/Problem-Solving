#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m,i,mx=0,ans=0,j;
	string s;
	vector<string> marks;
	int st[100]={0};
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>s;
		marks.push_back(s);
	}
	for(i=0;i<m;i++)
	{
		mx=0;
		for(j=0;j<n;j++)
		{
			if(marks[j][i] >mx)
				mx=marks[j][i];
		}
		for(j=0;j<n;j++)
		{
			if(marks[j][i]==mx)
				st[j]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(st[i])
			ans++;
	}
	cout<<ans;
	return 0;
}
