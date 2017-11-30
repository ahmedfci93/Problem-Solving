#include <iostream>
using namespace std;

int main() {
    int n,i,pi[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            pi[i]=i+2;
       else  pi[i]=i;
    }
    if(pi[n-1] > n)
    	cout<<-1;
    else{
    	for(i=0;i<n;i++)
    		cout<<pi[i]<<" ";
    }
    return 0;
}