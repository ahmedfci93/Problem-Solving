#include <iostream>
#include <stdio.h>
#include <algorithm>
#define ll long long
#define sf scanf
#define pf printf
using namespace std;

int main() {
	signed int a[100000],b[100000];
    signed int na,nb,k,m,i;
    cin>>na>>nb>>k>>m;
    for(i=0;i<na;i++)
    {
        sf("%d",&a[i]);
    }
    for(i=0;i<nb;i++)
    {
        sf("%d",&b[i]);
    }
    if(a[k-1]<b[nb-m])
        pf("YES");
        else pf("NO");
    return 0;
}