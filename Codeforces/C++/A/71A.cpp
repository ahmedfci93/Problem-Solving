#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string sarray [100];
    int i;
    int n;
    int length;
    cin >> n;
    for (i=0;i<n;i++)
    {
        cin >> sarray[i];
    }
    
    for (i=0;i<n;i++)
    {
        length = sarray[i].length();
        
        if (length <= 10)
        {
            cout << sarray[i]<<endl;
        }
        else
        {
            cout << sarray[i].at(0) << sarray[i].length() - 2 << sarray[i].at(length - 1)<<endl;  
        }
    }
    return 0;
}