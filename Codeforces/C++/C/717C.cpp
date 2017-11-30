#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include<math.h>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back

#define mem(a,b) memset(a,int(b),sizeof(a))

#define rloopi(n) for(int i=int(n)-1;i>-1;i--)
#define rloopj(n) for(int j=int(n)-1;j>-1;j--)
#define loopi(n) for(int i=0;i<int(n);i++)
#define loopi1(n) for(int i=1;i<=int(n);i++)
#define loopj(n) for(int j=0;j<int(n);j++)
#define loopj1(n) for(int j=1;j<=int(n);j++)

int n;
int in[100000];
long long ans=0;

int main() {
	int i,j;
	sf("%d",&n);
	loopi(n) sf("%d",&in[i]);
	sort(in,in+n);
	j=n-1;
	for(i=0;i<n;i++)
	{
		ans+=(long long)in[i]*in[j];
		if(ans>=10007)ans%=10007;
		j--;
	}
	pf("%d",ans);
	return 0;
}