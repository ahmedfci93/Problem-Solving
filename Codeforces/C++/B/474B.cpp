#include <iostream>
using namespace std;

int binary(int a[],int q,int n)
{
	int l=1,h=n,m=0;
        while(h-l>1)
        {
            m=(l+h)/2;
            if(a[m]>q) h=m;
            else l=m;
        }
        return l;
}


int main() {
	int n,m,q,i,ind;
    int piles[100001]={};
        cin>>n;
        piles[0]=0;
        for(i=1;i<=n;i++)
        {
        	cin>>piles[i];
        	piles[i]+=piles[i-1];
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>q;
            ind=binary(piles,q,n);
            if(piles[ind-1]+1<=q && piles[ind]>=q)cout<<ind<<endl;
            else cout<<ind+1<<endl;
        }
	return 0;
}