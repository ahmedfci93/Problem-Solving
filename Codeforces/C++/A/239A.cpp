#include <iostream>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
	long long x,y,s,k,n;
	cin>>y>>k>>n;
	for(s=0;s<=n;s+=k)
	{
		x=s-y;
		if(x>0)
			cout<<x<<" ";
	}
	if(x<=0)
		cout<<-1;
	return 0;
}
