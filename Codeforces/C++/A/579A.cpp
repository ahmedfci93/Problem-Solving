#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int c=0;
   while(n>=1){
        if(n%2){
            c++;
        }
    n/=2;
   }
   cout<<c;
   return 0;
}