#include <iostream>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main() {
	int x,n,i,num;
	int mx=-2000000000;
	int mn=2000000000;
	string s;
	char c;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		cin>>num;
		cin>>c;
	 	if(c=='N')
	 	{
	 		if(s==">=")s="<";
	 		else if(s==">")s="<=";
	 		else if(s=="<=")s=">";
	 		else s=">=";
	 	}
	 	if(s==">=")mx=max(mx,num);
	 		else if(s==">")mx=max(mx,num+1);
	 		else if(s=="<=")mn=min(mn,num);
	 		else mn=min(mn,num-1);
	}
	if(mn>=mx)cout<<mx;
	else cout<<"Impossible";
	return 0;
}
