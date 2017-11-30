#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    long long int n,d=1,eq,f=0;
    cin >> n;
    while(d!=0)
    {
        d = n/10;
        eq =n-(d*10);
        if(eq == 7|| eq ==4 )
            {
                f++;
                n=d;
            }
            else {n=d;}
    }
if (f==7||f==4)
    {cout << "YES";}
    else {cout << "NO";}

return 0;
}