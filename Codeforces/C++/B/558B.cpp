#include <iostream>
#include <string.h>//memset()
using namespace std;
 
int main() {
    int cf[2][1000001],last[1000001];//cf(1st row for count times of numbers,2nd row for record 1st appear for each number)
    int ai[100000];
    int i,n,max=0,maxp;//max(maximum number repeated)maxp(position of max)
    memset(last,-1,sizeof(last));
    memset(cf,0,sizeof(cf));
    cin>>n;
    for(i=0;i<n;i++)
        {   
            cin>>ai[i];
        }
 
    for(i=n-1;i>=0;i--)
    {
        cf[0][ ai[i] ]+=1;
        if(max < cf[0][ ai[i] ])
        {
            maxp=ai[i];
            max= cf[0][ ai[i] ];
        }
        cf[1][ ai[i] ]=i+1;//i+1 cuz i start loop from zero position
        if(last[ ai[i] ]==-1)
            last[ ai[i] ]=i+1;//i+1 cuz i start loop from zero position
    }
    for(i=1;i<=n;i++)
    {
        if(cf[0][ ai[i] ]==max)
            if(last[ ai[i] ] - cf[1][ ai[i]]< last[ maxp ] - cf[1][ maxp ] )
                {
                    maxp=ai[i];
                }
    }
    cout<< cf[1][ maxp ]<<" "<<last[ maxp ];
    return 0;
}