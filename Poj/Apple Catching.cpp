#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int t[1000],wgh,tree[3]={0,2,1};
int n;
int memo[1000][31];
int solve(int ind,int w,int curr)
{
	if(w==wgh+1) return -1;
	if(ind==n) return 0;
	if(memo[ind][w]!=-1) return memo[ind][w];
	int ret=solve(ind+1,w,curr);
	if(t[ind]==curr) ret=max(ret,1+solve(ind+1,w,curr));
		else ret=max(ret,1+solve(ind+1,w+1,tree[curr]));
	return memo[ind][w]=ret;

}
int main() {
	int i,mx=0;
	cin>>n>>wgh;
	for(i=0;i<n;i++) cin>>t[i];
    for(i=1;i<3;i++)
    {
    memset(memo,-1,sizeof(memo));
	mx=max(mx,solve(0,0,i));
     }
cout<<mx<<endl;
	return 0;
}