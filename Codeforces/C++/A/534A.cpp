#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	if(n==2)
		cout<<1<<endl<<1;
	else if(n==3)
		cout<<2<<endl<<1<<" "<<3;
	else{
		cout<<n<<endl;
		for(i=2;i<=n;i+=2)
			cout<<i<<" ";
		
		for(i=1;i<=n;i+=2)
			cout<<i<<" ";
	}
	
	return 0;
}