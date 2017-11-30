#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int d,sum,mx=0,mn=0,i,di;
	int sch_mn[30];
	int sch_mx[30];
	cin>>d>>sum;
	for(i=0;i<d;i++)
	{
		cin>>sch_mn[i]>>sch_mx[i];
		mn+=sch_mn[i];
		mx+=sch_mx[i];
	}
	if(sum>=mn && sum<=mx)
	{
		cout<<"YES"<<endl;
		di=mx-sum;
		for(i=0;i<d;i++)
		{
			if(di)
			{
				if(sch_mx[i]-sch_mn[i]>=di)
				{
					cout<<sch_mx[i]-di<<" ";
					di=0;
				}
				else 
				{
					cout<<sch_mn[i]<<" ";
					di-=sch_mx[i]-sch_mn[i];
				}
			}
			else cout<< sch_mx[i]<<" ";
		}
	}
	else
	cout<<"NO";
	return 0;
}