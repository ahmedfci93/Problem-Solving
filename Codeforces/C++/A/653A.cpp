#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int i,n,f=0,num;
	vector<int> t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		t.push_back(num);
	}
	sort(t.begin(),t.end());
	t.erase(unique(t.begin(), t.end()),t.end());
	int sz=t.size();
	for(i=0;i<sz-2;i++)
	{
		if(t[i]+1==t[i+1] && t[i+1]+1==t[i+2] )
		{	
			f=1;
			break;
		}
	}
	if(f)cout<<"YES";
	else cout<<"NO";
	return 0;
}