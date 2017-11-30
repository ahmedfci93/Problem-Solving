#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,fc,i,st=0,ans,num,tmp;
	int c[20];
	int op[20];
	while(scanf("%d%d%d",&n,&m,&fc)==3 && !(n==0 && m==0 && fc==0))
	{
		ans=tmp=0;
		for(i=0;i<n;i++)
		{
			cin>>c[i];
			op[i]=0;
		}
		for(i=0;i<m;i++)
		{
			cin>>num;
			if(op[num-1]==1)
			{
				op[num-1]=0;
				tmp-=c[num-1];
			}
			else 
			{
				op[num-1]=1;
				tmp+=c[num-1];
				ans=max(ans,tmp);
			}
		}
		st++;
		cout<<"Sequence "<<st<<endl;
		if(fc>=ans)
			cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<ans<<" amperes."<<endl<<endl;
		else cout<<"Fuse was blown."<<endl<<endl;
	}
	return 0;
}