#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
string s [10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
string s1;
int n,i,j,size,c=0,s0=0;

cin>>n;
while(n)
{
	cin>>s1;
	size=s1.size();
	for (i = 0; i < 10; ++i)
	{
		s0=s[i].size();
		if(size==s0)
		{
				for (j = 0; j < size; ++j)
			{
				if(s1[j]==s[i][j])
					c++;
			}
				if(c==size-1||c==size)
			{
				cout<<i<<endl;
				i=10;
			}
				c=0;
		}
	}

	n--;
}
return 0;
}