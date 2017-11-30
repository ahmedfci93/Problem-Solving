//1st Solution
#include <iostream>
#include <set>
using namespace std;

int main() {
	int n,q,k,i,idt,id;
	int t[1500005];
	set<int>dis;
	cin>>n>>k>>q;
	for(i=1;i<=n;i++)
		cin>>t[i];
	for(i=0;i<q;i++)
	{
		cin>>idt>>id;
		if(idt==2)
		{
			if(dis.count(t[id])==1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}else
		{
			dis.insert(t[id]);
			while(dis.size()>k) 
			{
				dis.erase(dis.begin());
			}
		}
	}
	return 0;
}
//===========================//

//2nd Solution

#include <iostream>
using namespace std;

int main() {
	int n,q,k,sz=0,i,idt,id,j,min,r,f;
	int t[1500005];
	int a[6]={};
	cin>>n>>k>>q;
	for(i=1;i<=n;i++)
		cin>>t[i];
	for(i=0;i<q;i++)
	{
		cin>>idt>>id;
		if(idt==2)
		{
			f=0;
			for(j=0;j<sz;j++)
			{
				if(a[j]==id)
				{	
					f=1;
				}
			}
			if(f)
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}else
		{
			if(sz<k){a[sz]=id;
			sz++;}
			else
			{
				min=t[a[0]];
				r=0;
				for(j=1;j<sz;j++)
				{
					if(min>t[a[j]])
					{
						min=t[a[j]];
						r=j;
					}
				}
				if(t[a[r]]<t[id]) a[r]=id;
			}
		}
	}
	return 0;
}