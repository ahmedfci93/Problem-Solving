#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int x1,x2,y1,y2,ans;
	cin>>x1>>y1>>x2>>y2;
	ans=abs(x1-x2);
	ans=max(abs(y1-y2),ans);
	cout<<ans;
	return 0;
}