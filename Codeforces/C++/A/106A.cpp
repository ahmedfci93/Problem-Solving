#include <iostream>
using namespace std;

int main() {
	int i,id1,id2,f=0;
	char c;
	string s1,s2;
	char rank[9]={'6', '7', '8', '9', 'T', 'J', 'Q', 'K' , 'A'};
	cin>>c>>s1>>s2;
	if(s1[1]==s2[1])
	{
		for(i=0;i<9;i++)
		{
			if(s1[0]==rank[i]) id1=i;
			if(s2[0]==rank[i]) id2=i;
		}
		if(id1>id2)f=1;
	}
	else if(s1[1]==c)
		f=1;
	if(f)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}