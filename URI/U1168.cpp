#include <iostream>
#include <string>
using namespace std;

int main() {
	int i,size,n,a[10]={6,2,5,5,4,5,6,3,7,6},sum=0,plus;
string s;
cin>>n;
while(n){
	cin >> s;
	size=s.size();
	for (i = 0; i < size; ++i)
	{

		sum +=a[s[i]-'0'];
	}
	cout <<sum<<" leds"<<endl;
	sum=0;
	n--;
}
return 0;
}