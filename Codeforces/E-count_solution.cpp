/*link: http://codeforces.com/group/uEwuL46gIl/contest/207732/problem/E
problem:
Given four list A, B, C and D you are required to count how many quadruplet (a, b, c, d ) belongs to A x B x C x D such that a + b + c + d = 0

Input
The first line of the input file contains the size of the lists n (1  ≤  n  ≤  1000). Then n lines, each line contains four integer values ( - 109  ≤  each integer  ≤  109) that belong respectively to A, B, C and D.

Output
Number of different solutions

*/

#include <iostream>
#include <algorithm>
using namespace std;
int a[1000],b[1000],c[1000],d[1000];
int ab[1000000],cd[1000000];
int main() {
	int n,i,cnt=0,j;
	long long ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)cin>>a[i]>>b[i]>>c[i]>>d[i];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			ab[cnt]=a[i]+b[j];
			cd[cnt]=c[i]+d[j];
			cnt++;
		}
	sort(cd,cd+cnt);
	for(i=0;i<cnt;i++)
	{
		ans+=(upper_bound(cd,cd+cnt,ab[i]*-1)-cd)-(lower_bound(cd,cd+cnt,ab[i]*-1)-cd);
	}
	cout<<ans;
	return 0;
}