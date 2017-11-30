#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define pf printf 
using namespace std;


int main() {
    int test,n,i;
    cin>>test;
    while(test--)
        {
        cin>>n;
        if(n%3==0)
            {
            for(i=0;i<n;i++)
                pf("5");
        }
        else if(n%3==2&&n>=5)
            {
            for(i=0;i<n-5;i++)
                pf("5");
            for(i=0;i<5;i++)
                pf("3");
        }
        else if(n%3==1&& n>=10)
            {
            for(i=0;i<n-10;i++)
                pf("5");
            for(i=0;i<10;i++)
                pf("3");
        }else if(n%5==0)
       {
            for(i=0;i<n;i++)
                pf("3");
        }else cout<<-1;
        cout<<endl;
    }
    return 0;
}
