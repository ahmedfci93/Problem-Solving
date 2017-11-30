#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,c,m,wrs,newc,answer;//newc(new chocolate),wrs(wrappers)
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>m;
        answer=wrs=n/c;
        if(answer>=m)
        {
	        while(wrs>=m)
	        {
	            newc=wrs/m;
                answer+=newc;
                wrs=(wrs%m)+newc;
	        }
	     }
        cout<<answer<<endl;
    }
    return 0;
}
