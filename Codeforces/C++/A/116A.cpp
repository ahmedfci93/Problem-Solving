#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int num, i ;// num of stops
    int capacity ;
    int exit , enter;
    int passanger;
    cin >>  num;
    cin >> exit >> enter;
    passanger = enter;
    capacity = enter ;
    for (i = 0; i<num-1 ; i++)
    {
        cin >> exit >> enter;
        passanger = passanger - exit + enter;
        if (passanger > capacity )
            capacity = passanger;
    }
    cout << capacity;


    return 0;
}