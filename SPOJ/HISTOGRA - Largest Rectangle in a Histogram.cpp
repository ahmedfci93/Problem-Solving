#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <queue>
#include <utility>
#include <stack> 
#include <algorithm> 

using namespace std;
int in[100000];
int r[100001];
int l[100001];
int main() {
	int n,i,cnt;
	stack <int> st;
	long long ans;
	while(scanf("%d",&n)&&n)
	{
		ans=0;
		memset(l,0,sizeof(l));
		memset(r,0,sizeof(r));
		while(!st.empty()) st.pop();
		for(i=0	;i<n;i++)scanf("%d",&in[i]);
		for(i=0	;i<n;i++)
		{
			while(!st.empty()&&in[st.top()]>=in[i])
			{
				l[i]+=l[st.top()]+1;
				st.pop();
			}
			
			st.push(i);
		}
		while(!st.empty()) st.pop();
		for(i=n-1;i>-1;i--)
		{
			while(!st.empty() && in[st.top()]>=in[i])
			{
				r[i]+=r[st.top()];
				st.pop();
			}
			r[i]++;
			st.push(i);
		}
		for(i=0;i<n;i++)
			ans=max(ans,(long long)(r[i]+l[i])*in[i]);
		cout<<ans<<endl;
	}
	return 0;
}