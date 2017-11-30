#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,i,j;
	int f,k,sum;
	vector<int> a;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>f;
		a.push_back(f);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				sum=a[i]+a[j];
				for(k=0;k<n;k++)
					if(k!=i&&k!=j&&a[k]==sum)
					{
						cout << k+1 <<" "<<i+1<<" "<<j+1;
						return 0;
					}
						
			}
		}	
	}
	cout<<-1;
	return 0;
}