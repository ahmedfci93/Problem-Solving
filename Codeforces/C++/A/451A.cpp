#include <iostream>
#include <vector>
using namespace std;





int main()
{
    int n , m,s;
    cin >> n>>m;
    if(n>m)
    {
            s=m;
    
    }else{s=n;}
    int i;
    for(i=0;;i++)
    {
        
        if(s==0)
            break;
            s--;
    }
    if(i%2==0)
    {
        cout << "Malvika";
    }else{cout<<"Akshat";}
    return 0;
}