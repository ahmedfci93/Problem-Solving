#include <iostream>
#include <string>


using namespace std;

int main()
{
    int i;
    int a[6]={0};
    int num;
    int increment = 1;
    int num1 = 0;
    bool found = false;
    int found1;
    cin >> num;
    while (!found)
    {
        a[1] = num1 + increment;
        if (a[1] >= num)
        {
            found = true;
            i = 6;
            found1 = 1;
        }
        for ( i = 2 ; i < 6; i++)
        {
            a[i] = a[i-1] + increment ;
            if (a[i] >= num && a[i-1] < num)
        {
            found = true;
            found1 = i;
        }
        }   
        num1 = a[5];
        increment = increment * 2;
    }
    
    
    switch (found1)
    
      {
        case 1:
            cout << "Sheldon";
            break;
        case 2:
            cout << "Leonard";
            break;
        case 3:
            cout << "Penny";
            break;
        case 4:
            cout << "Rajesh";
            break;
        case 5:
            cout << "Howard";
            break;
       }   
    return 0;
}