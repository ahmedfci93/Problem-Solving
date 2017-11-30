#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
bool is_vowel(char c);
char letter[6]={'A', 'E', 'I', 'O', 'U', 'Y'};
int main() {
	int sz,i;
	string s;
	getline(cin , s);
	sz=s.size();
	for(i=sz-1;i>=0;i--)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
			if(is_vowel(s[i]))
				cout<<"YES";
			else cout<<"NO";
			break;
		}
	}
	return 0;
}

bool is_vowel(char c)
{
	int i;
	c=toupper(c);
	for(i=0;i<6;i++)
		if(c==letter[i])
			return true;
			
	return false;
}