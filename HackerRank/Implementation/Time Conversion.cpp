#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s,s1;
    int a,size;
    cin>>s;
    a=(s[0]-'0')*10+s[1]-'0';
    size=s.size();
    s1=s.substr(size-2);
    if(s1=="PM")
        if(a==12)
        cout<<12<<s.substr(2,size-4);
        else cout<<12+a<<s.substr(2,size-4);
    else{
        if(a==12)
            cout<<"00"<<s.substr(2,size-4);
        else if(a<10) cout<<"0"<<a<<s.substr(2,size-4);
          else cout<<a<<s.substr(2,size-4);
    }
    return 0;
}