#include <iostream>
#include <string>


using namespace std;

int main()
{
    int i, zero = 0;
    string s1,s2;
    cin >> s1 >> s2;
    int length = s1.length();
    for ( i = 0 ; i < length ; i++)
    {
        if (tolower(s1[i]) < tolower(s2[i]))
        {
            cout << "-1";
            zero = 1;
            i = length;
        }
        if (tolower(s1[i]) > tolower(s2[i]))
        {    
            cout << "1";
            zero = 1;
            i = length;
        }
    }
    if ( !zero)
        cout << "0";
    return 0;
}