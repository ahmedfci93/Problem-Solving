#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    
    int num;
    int cars=0;
    int i , j;
    int c1 = 0, c2= 0 , c3 = 0;
    cin >> num;
    for (i=0;i<num;++i)
    {
        cin >> j;
        switch (j)
        {
            case 1:
                c1++;
                break;
            case 2 :
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                cars++;
                break;
        }
    }
    if ( c3 != 0 && c3 >= c1)
    {
        cars = c3 + cars ;
        c1=0;
    }
    if( c3 < c1)
    { 
        cars = c3 + cars ;
        c1 = c1 - c3;
    }
    if ( c2 > 1 && c2 % 2 == 0)
    {
        cars = cars + ( c2 / 2);
    }
    if ( c2 >= 1 && c2 % 2 != 0)
    {
        c2--;
        cars = cars + ( c2 / 2);
        c1 = c1 + 2;
    }
    
    if ( c1 != 0 )
    {
        cars = cars + (int) ceil (c1/4.0);
    }
    cout << cars;
    


    return 0;
}