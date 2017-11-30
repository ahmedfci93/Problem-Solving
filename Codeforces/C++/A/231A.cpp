#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int num, i , j;
    int accp = 0, test;
    int count = 0;
    cin >>  num;
    for (i = 0; i<num ; i++)
    {
        for(j=0 ; j< 3 ; j ++)
        {
            cin >> test;
            if ( test == 1)
                accp ++;
        }
        
        if (accp >= 2)
            count++;
        accp = 0;
    }
    cout << count;


    return 0;
}