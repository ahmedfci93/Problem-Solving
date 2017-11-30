#include <iostream>
using namespace std;
void reverse(string s);
int main() {
	string s,tmp;
	int sz,i;
	while(getline(cin,s))
	{
		sz=s.size();
		for(i=0;i<sz;i++)
		{
			if(s[i]!=' ')
			{
				tmp+=s[i];
			}
			else {
				reverse(tmp);
				cout<<" ";
				tmp="";
			}
		}
		reverse(tmp);
		tmp="";
		cout<<endl;
	}
	return 0;
}

void reverse(string s)
{
	int sz,j;
	sz=s.size();
	for(j=sz-1;j>-1;j--)
		cout<<s[j];
}