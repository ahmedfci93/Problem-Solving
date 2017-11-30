#include <iostream>
#include <stdio.h>
#include <map>
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

map<string,int> digit;
map<int,string> code;
int main() {
	string ab,ans;
	int c,i,a,b,d;
	digit["063"]=0,code[0]="063",digit["010"]=1,code[1]="010",digit["093"]=2,code[2]="093",digit["079"]=3,code[3]="079",digit["106"]=4,code[4]="106",digit["103"]=5,code[5]="103",digit["119"]=6,code[6]="119",digit["011"]=7,code[7]="011",digit["127"]=8,code[8]="127",digit["107"]=9,code[9]="107";
	bool plus;
	while(cin>>ab && ab!="BYE")
	{
		ans="";
		plus=d=1;
		a=b=0;
		i=ab.size()-2;
		while(i>-1)
		{
			if(ab[i]=='+')
			{
				i--;
				plus=0;
				d=1;
				continue;
			}
			if(plus)
			{
				b+=digit[ab.substr(i-2,3)]*d;
			}else a+=digit[ab.substr(i-2,3)]*d;
			d*=10;
			i-=3;
		}
		c=a+b;
		while(c)
		{
			ans=code[c%10]+ans;
			c/=10;
		}
		cout<<ab+ans<<endl;
	}
	return 0;
}