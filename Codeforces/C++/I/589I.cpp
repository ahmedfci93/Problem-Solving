#include <iostream>
#include <stdio.h>


using namespace std;

int main() {
    int n,k,i,ci,ans=0;
    int cc[101]={0};
    scanf("%d%d",&n,&k);
    int eq=n/k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ci);
        cc[ci]++;
    }
    for(i=1;i<=k;i++)
    {
        if(cc[i]<eq)
            ans+=eq-cc[i];
    }
    printf("%d",ans);
    return 0;
}