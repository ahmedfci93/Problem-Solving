#include <iostream>
using namespace std;
		
int main() {
	int i,n,d,t=0,ti,j;//t total time, j number of jokes 
	cin>>n>>d;
	for(i=0;i<n;i++)
	{
		cin>>ti;
		t +=ti;
	}
	j=(n-1)*2;
	t +=(j*5);
	if(t<=d)
	{
		j += (d-t)/5;
		cout<<j;
	}else cout<<-1;
return 0;
}