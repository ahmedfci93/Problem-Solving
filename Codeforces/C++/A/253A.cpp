#include <iostream>
#include <fstream>//ifstream(),ofstream()
using namespace std;

int main() {
	ifstream in("input.txt");//the input will take from file
  	ofstream out("output.txt");//the output will be in file
	int n,m,i,b=0,g=0,d,mx;//b(boy),g(girl),d(difference between g-b),mx(max)
	string s;
	in>>n>>m;
	if(n<=m)
	{
		s="GB";
		mx=n;
		g=1;
		d=m-n;
	}else {
		s="BG";
		mx=m;
		b=1;
		d=n-m;
	}
	for(i=0;i<mx;i++)
		out<<s;
	for(i=0;i<d;i++)
	{
		if(b)
			out<<"B";
		if(g)
			out<<"G";
		
	}
	
	return 0;
}