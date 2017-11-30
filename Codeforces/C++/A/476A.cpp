#include <iostream>
using namespace std;

int main() {
	int n,m,ans,re;//reminder
	cin>>n>>m;
	if(m>n)
		ans=-1;
	else
	{
		ans=(n+1)/2;//minimal number in range{n/2,n},instead of (n+1/2) is ceil (n/2)
		re=(ans+m)%m;//range start from ans so add m to ans if there is reminder ,remove it
		if(re)
			ans=ans+m-re;
		
	}
	cout << ans;
	
	return 0;
}