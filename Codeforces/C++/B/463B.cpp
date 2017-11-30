#include <iostream>
using namespace std;

int main() {
	int n,hi,i,e=0,ph,d;//ph (previous height),d(dollars),e(energy)
	cin>>n>>ph;
	d=ph;//you start from height 0 = 0 and have e=0,then when you jump to height 1, you pay dollar = height 1
	for(i=2;i<=n;i++)
	{
		cin>>hi;
		ph +=e;
		if(ph-hi>=0)
			e=ph-hi;
		else {
			d+=hi-ph;
			e=0;
		}
		ph=hi;
	}
	cout<<d;
	return 0;
}