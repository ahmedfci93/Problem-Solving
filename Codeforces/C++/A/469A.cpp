#include <iostream>
#include <set>
using namespace std;

int main() {
	int n,i,j,p,x;
	set<int> lp;//level passed
	cin>>n;
	for(i=0;i<2;i++)
	{
		cin>>p;
		for(j=0;j<p;j++)
		{
			cin>>x;
			lp.insert(x);
		}
	}
	if(lp.size()==n)
		cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
	return 0;
}