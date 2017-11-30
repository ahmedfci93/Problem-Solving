#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,c,l,r,i,j,res,t1,t2;
	int p[50],t[50];
	l=r=t1=t2=0;
	cin>>n>>c;
	for(i=0;i<n;i++)cin>>p[i];
	for(i=0;i<n;i++)cin>>t[i];
	for(i=0,j=n-1;i<n;i++,j--)
	{
		t1+=t[i];
		t2+=t[j];
		l+=max(0,p[i]-c*t1);
		r+=max(0,p[j]-c*t2);
	}
	if(l>r) cout<<"Limak" ;
	else if(r>l) cout<<"Radewoosh";
	else cout<<"Tie";
	return 0;
}