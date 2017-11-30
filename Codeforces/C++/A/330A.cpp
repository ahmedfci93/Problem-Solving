#include <iostream>
#include <set>

using namespace std;

int main() {
    int r,c,i,j,t=0,visc,visr;
    set<int> cl,rw;
    char g[10][10];
    cin>>r>>c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>g[i][j];
            if(g[i][j]=='S')
                {
                    rw.insert(i);
                    cl.insert(j);
                }
        }
    }
    visc=c-cl.size();
    visr=r-rw.size();
    if(cl.size()||rw.size())
    {
        t=visc*r+ visr*c-visr*visc;
    }
    else t=r*c;
    cout<< t;
    return 0;
}