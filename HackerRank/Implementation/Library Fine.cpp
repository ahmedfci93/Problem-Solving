#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int ard[3],erd[3],ans=0;//ard(actual return date),erd(expected return date)
    cin>>ard[0]>>ard[1]>>ard[2];
    cin>>erd[0]>>erd[1]>>erd[2];
    if(ard[2]>erd[2])
        ans=10000;
    else if(ard[2]==erd[2]){
        if(ard[1]>erd[1])
            ans=(ard[1]-erd[1])*500;
        else if(ard[1]==erd[1])
            {
            if(ard[0]>erd[0])
                ans=(ard[0]-erd[0])*15;
        }
    }
    cout<<ans;
    return 0;
}