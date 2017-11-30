#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    string s1;
    char c;
    int n,t,i,j;
    cin>>n>>t;
    cin>>s1;
    for(j=0;j<t;j++)
    {
    for(i=0;i<n;++i)
    {
        if(s1[i]=='B' && s1[i+1]=='G')
           {
 
                c=s1[i];
                s1[i]=s1[i+1];
                s1[i+1]=c;
                i++;
            }
 
 
        }
    }
    cout << s1;
return 0;
}