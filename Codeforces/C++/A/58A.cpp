#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    int h=0,e=0,l=0,k=0,f=0;
    int i,j;
    cin >> s;
    for(i=0 ; i<s.length();i++)
    {
        if( s[i]=='h')
        {
            h=1;
        }
        if ( (s[i]== 'e') && h==1)
        {
            e=1;
        }
        if(s[i] == 'l' && e==1 )
        {
            k++;
        }
        if(s[i] =='o' && k>=2)
        {
            f=1;
            break;
        }
    } 
    if(f==1)
        {cout << "YES";}
        else {cout <<"NO";}
return 0;
}