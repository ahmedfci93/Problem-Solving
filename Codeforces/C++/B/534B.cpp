#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int v1,v2,t,d,m[100],mx,mi,ans,i;//m[](distancs after on second),mx(max),mi(min)
    scanf("%d%d%d%d",&v1,&v2,&t,&d);
    ans=v1+v2;// 1st distance + last distance
    if(v1>v2)
        mx=v1,mi=v2;
    else
        mx=v2,mi=v1;
    m[0]=mi;
    m[t-1]=mx;
    for(i=1;i<t-1;i++)//the change of distance in each second by increment d
    {
        m[i]=m[i-1]+d;
        ans+=m[i];
    }
    for(i=t-2;i>0;i--)//to sure the difference between adjacent two distances <= d
    {
        if(abs(m[i]-m[i+1])>d)
        {
            ans-=m[i];
            m[i]=m[i+1]+d;
            ans+=m[i];
        }else break;
    }
    cout<<ans;
    return 0;
}