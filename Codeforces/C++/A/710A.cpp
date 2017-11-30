#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back


int main() {
	string s;
	int ans=0;
	cin>>s;
	if((s[1]-'0')-1>0)
	{
		if((s[0]-'a')+1<8)ans++;
		if((s[0]-'a')-1>-1)ans++;
		ans++;
	}
	if((s[1]-'0')+1<9)
	{
		if((s[0]-'a')+1<8)ans++;
		if((s[0]-'a')-1>-1)ans++;
		ans++;
	}
	if((s[0]-'a')+1<8)ans++;
	if((s[0]-'a')-1>-1)ans++;
	cout<<ans;
}