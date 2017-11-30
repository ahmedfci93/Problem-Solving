#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
    string s1, s2;
    int i , temp1, j=0;
    int temp [2]={0,0};
    cin >> s1 >> s2;
    vector <char> v1(s1.begin(), s1.end());
    vector <char> v2(s2.begin(), s2.end());
    if (s1.length() == s2.length() && v1 != v2 )
    {
    
        for (i=0 ; i<s1.length(); i++)
        {
            
            if (v1[i] != v2[i])
            {
                temp[j] = i;
                j++;
            }
            if (j>2)
                break;
        }
        
        if(j == 2)
        {
            temp1 = v2[temp[0]];
            v2 [temp[0]] = v2 [temp[1]];
            v2 [temp[1]]= temp1;
            
        }
        if(v1 == v2)
        {
            cout << "YES";
        }else { cout << "NO";}
    }
    else { 
    
    cout << "NO"; 
    
    
    
    }
    return 0;
}