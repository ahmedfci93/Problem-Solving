# include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cin >> s;
    vector <char> v(s.begin(), s.end());
    sort(v.begin(), v.end());
    v.resize(unique(v.begin(), v.end()) - v.begin());
    if (v.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
        
        
    }
    else { cout << "IGNORE HIM!"; }

    return 0;
}