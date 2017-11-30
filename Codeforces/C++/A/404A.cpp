#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string>paper;
	int n,i,j,ans=1;
	char d,e;
	string s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		paper.push_back(s);
	}
	d=paper[0][0];
	e=paper[0][1];
	if(d!=e)
	{
		for(i=0;i<n &&ans;i++)
		{
			for(j=0;j<n&&ans;j++)
			{
				if((i==j || i+j==n-1) && d!= paper[i][j])
					ans=0;
				if(!(i==j || i+j==n-1) && e!= paper[i][j])
					ans=0;
			}
		}
	}else ans = 0;
	if(ans) cout<<"YES";
	else cout<<"NO";
	return 0;
}