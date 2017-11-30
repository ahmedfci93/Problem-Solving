#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int m;
int solve(string i, string j);

int main() {
    vector <string> t;//t(team)
    string s;
    int n,i,j,tp=0,np,mxtp=0;//tp(topics),mxtp(max topics),np(number of 2 persons)
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        t.push_back(s);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            tp=solve(t[i],t[j]);
            if(tp>mxtp)
            {
                mxtp=tp;
                np=1;
            }
            else if(tp==mxtp)
                np++;
        }
    }
    cout<<mxtp<<endl<<np;
    return 0;
}

int solve(string i, string j)
{
    int ans=0,c;
    for(c=0;c<m;c++)
        if(i[c]-'0'||j[c]-'0')
            ans++;
    return ans;
}