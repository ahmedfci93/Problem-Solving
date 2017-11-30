//1st Solution

#include <iostream>
#include <map>
using namespace std;

int main() {
	int b,a,c;
	cin>>a>>b>>c;
	while(c>=0)
	{
		if(c%a==0) return cout<<"YES",0;
		c-=b;
	}cout<<"NO";
	return 0;
}

//==============
//2nd Solution
#include <iostream>
using namespace std;

int main() {
	int b,i,a,c,f=0,j;
	cin>>a>>b>>c;
	for(i=0;!f;i++)
	{
		if(x==c) f=1;
		if(x>c) break;
		y=0;
		for(j=0;!f;j++)
		{
			if(x+y==c|| y==c) f=1;
			if(y>c) break;
			y+=b;
		}
		x+=a;
	}
	if(f)
		cout<<"YES";
	else cout<<"NO";
	return 0;
}