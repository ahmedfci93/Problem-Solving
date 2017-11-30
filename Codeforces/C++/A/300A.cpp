#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> x,y,z;
	int n,a,i,szz,szx,szy,minus=0,pos=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		
		if(0>a)
			x.push_back(a);
		else if(0<a)
			y.push_back(a);
		else 
			z.push_back(a);
		
	}
	szx=x.size();
	szy=y.size();
	szz=z.size();
	if(szx%2==0)
	{
		z.push_back(x.back());
		x.pop_back();
		szx--;
		szz++;
	}
	if(szy==0)
	{
		y.push_back(x.back());
		x.pop_back();
		y.push_back(x.back());
		x.pop_back();
		szx-=2;
		szy+=2;
	}
	cout<<szx<<" ";
	for(i=0;i<szx;i++)
		cout<<x[i]<<" ";
	cout<<endl;
	cout<<szy<<" ";
	for(i=0;i<szy;i++)
		cout<<y[i]<<" ";
	cout<<endl;
	cout<<szz<<" ";
	for(i=0;i<szz;i++)
		cout<<z[i]<<" ";
	return 0;
}