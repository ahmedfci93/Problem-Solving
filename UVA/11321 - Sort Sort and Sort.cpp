//1st Solution:(Best)
#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back
int m,n;
int in[10000];
bool cmp(int b,int a)
{
	if(b%m==a%m)
	{
		if(b%2 && a%2)return b>a;
		if(!(b%2) && !(a%2))return b<a;
		return (b%2);
	}
	return b%m<a%m;
}
int main() {
	int i,j;
	while(sf("%d%d",&n,&m))
	{
		pf("%d %d\n",n,m);
		if(!(n))break;
		for(i=0;i<n;i++)sf("%d",&in[i]);
		sort(in,in+n,cmp);
		for(i=0;i<n;i++)pf("%d\n",in[i]);
	}
}

//2nd Solution
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int i,j,n,m,size;
	vector<int>even;
	vector<int>odd;
	while(cin>>n>>m&&m&&n)
	{
		
		map<int, vector<int> > mods; 
		cout<<n<<" "<<m<<endl;
		for(i=0;i<n;i++)
		{
			cin>>j;
			mods[j%m].push_back(j);
		}
		map<int,vector<int> >::const_iterator it;
		for (it = mods.begin(); it!= mods.end(); it++)
		{
			size=it->second.size();
			for(i=0;i<size;i++)
			{
				if(it->second[i]%2==0)even.push_back(it->second[i]);
				else odd.push_back(it->second[i]);
			}
			sort(even.begin(),even.end(),greater<int>());
			sort(odd.begin(),odd.end());
			while(!odd.empty())
			{
				cout<<odd.back()<<endl;
				odd.pop_back();
			}
			while(!even.empty())
			{
				cout<<even.back()<<endl;
				even.pop_back();
			}
	    }
	}
    cout<<0<<" " <<0<<endl;
	return 0;
}