#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<string,vector<int> >u;
map<string,vector<int> >l;
map<string,vector<int> >bsd;//base,size,dimension
int d1[20];
int solve(string key);
int main() {
	int n,r,b,nd,i,j,ad,num;
	string s;
	cin>>n>>r;
	for(i=0;i<n;i++)
	{
		cin>>s;
		cin>>ad>>b>>nd;
		bsd[s].push_back(ad);
		bsd[s].push_back(b);
		bsd[s].push_back(nd);
		for(j=0;j<nd*2;j+=2)
		{
			cin>>num;
			l[s].push_back(num);
			cin>>num;
			u[s].push_back(num);
		}
	}
	for(i=0;i<r;i++)
	{
		cin>>s;
		cin>>num;
		d1[0]=num;
		cout<<s<<"["<<num;
		for(j=1;j<bsd[s][2];j++)
		{
			cin>>num;
			d1[j]=num;
			cout<<", "<<num;
		}
		cout<<"] = "<<solve(s)<<endl;
	}
	return 0;
}
int solve(string key)
{
	int c[20],ans,i;
	int di=bsd[key][2];
	c[di]=bsd[key][1];
	c[0]=bsd[key][0]-(c[di]*l[key][di-1]);
	for(i=di-1;i>=1;i--)
	{
		c[i]=c[i+1]*(u[key][i]-l[key][i]+1);
		c[0]-=c[i]*l[key][i-1];
	}
	ans=c[0];
	for(i=0;i<di;i++)
		ans+=c[i+1]*d1[i];
	return ans;
}