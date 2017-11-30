#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long n,e=0,s=0,exist=1,j,i,a[100002];//s(start),e(end)
	cin>>n;
	a[n+1]=1e9,a[0]=0;//initialize border of array
	for(i=1;i<=n;i++)
		cin>>a[i];
	if(n==1)
		cout<<"yes"<<endl<<1<<" "<<1;
	else if (n==2){
		if(a[1]<=a[2])
			cout<<"yes"<<endl<<1<<" "<<1;
		else cout<<"yes"<<endl<<1<<" "<<2;
	}else{
		for(i=1;i<n;i++)
		{
			if(a[i]>a[i+1])
			{
				s=i;
				break;
			}
		}
		for(j=n;j>1;j--)
		{
			if(a[j]<a[j-1])
			{
				e=j;
				break;
			}
		}
		for(i=s;i<e;i++)
		{
			if(a[i]<a[i+1])
			{
				exist=0;
				break;
			}
		}
		if(exist&& a[s]<=a[e+1]&&a[s-1]<a[e])
		{
			cout<<"yes"<<endl<<s<<" "<<e;
		}else if(e==0&&s==0)cout<<"yes"<<endl<<1<<" "<<1; 
		else cout<<"no";
	}
	return 0;
}