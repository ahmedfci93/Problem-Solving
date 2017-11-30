#include <iostream>
#include <string>
using namespace std;

int main() {
string s0,s1;
int size,i,max=0,n;
cin>>n;
while(n)
{	cin>>s0>>s1;
	
	size=s0.size();
	for (int i = 0; i < size; ++i)
	{
		if(s0[i]<s1[i])
			max+= ( s1[i]-s0[i] );
		else if(s0[i]>s1[i])
			max += ('z'-s0[i]+1) + (s1[i]-'a');
	}
	cout << max<<endl;
	max=0;
	n--;
}
	return 0;
}