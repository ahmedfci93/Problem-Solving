#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,i,j,wa=1,maxa=0,ans=0,size;//wa(wrong article),maxa(max articles)
	char c,c1;//distinct 2char
	vector<string> ar;//ar(articles)
	string s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		ar.push_back(s);
	}
	for(c='a';c<='z';c++)
	{
		for(c1='a';c1<='z';c1++)
		{
			maxa=0;
			for(i=0;i<n;i++)
			{
				size=ar[i].size();
				for(j=0;j<size;j++)
				{
					if(ar[i][j]!=c && ar[i][j]!=c1)
					{
						wa=0;
						break;
					}
				}
				if(wa)
					maxa+=size;
				wa=1;
			}
			ans=max(maxa,ans);
		}
	}
	cout<<ans;
	return 0;
}