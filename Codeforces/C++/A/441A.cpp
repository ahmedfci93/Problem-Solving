#include <iostream>
#include <set>
using namespace std;

int main() {
	int n,v,i,k,j,s;
	set<int>q;
	cin>>n>>v;
	for(i=1;i<=n;i++)
	{
		cin>>k;
		for(j=0;j<k;j++)
		{
			cin>>s;
			if(s<v)
			{
				q.insert(i);
			}
		}
	}
	if(q.size())
	{
		cout<<q.size()<<endl;
		for(set<int>::iterator ite=q.begin();ite!=q.end();ite++)
			cout<<*ite<<" ";
			
	}else cout<<0;
	return 0;
}