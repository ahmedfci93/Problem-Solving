#include <iostream>
#include <sstream>
using namespace std;
string drinks[11]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

bool found(string s)
{
	for(int i=0;i<11;i++)
	{
		if(drinks[i]==s)
			return true;
	}
	return false;
}

int main() {
	int n,i,ans=0,age=0;
	string s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		if (s[0]-'0'>= 0&&s[0]-'0'<=9)
		{
			stringstream ss(s);
  			ss >> age;
  			if (age<18) ans++;
		}else{
		if(found(s)) ans++;
		}
	}
	cout<<ans;
	return 0;
}