#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main ()
{
    string s;
    int length, i;
    cin >> s;
    length = s.length();
    for ( i= 0; i<length; i++)
    {
        s.at(i) = tolower(s.at(i));     
        if (s.at(i) == 'a' ||s.at(i) == 'o'  ||s.at(i) == 'u' ||s.at(i) == 'y' ||s.at(i) == 'e' ||s.at(i) == 'i'  )
        {
            continue;
        }
        cout << "." << s.at(i);
    }
    
    return 0;
}